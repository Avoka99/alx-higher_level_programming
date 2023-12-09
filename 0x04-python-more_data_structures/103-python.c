#include <Python.h>

/**
 * print_python_list - Prints basic info about a Python list
 * @p: PyObject representing a Python list
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size, i;
	PyObject *item;

	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		return;
	}

	size = PyList_Size(p);
	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

	for (i = 0; i < size; i++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
	}
}

/**
 * print_python_bytes - Prints basic info about a Python bytes object
 * @p: PyObject representing a Python bytes object
 */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t size, i;
	char *data;

	printf("[.] Bytes object info\n");

	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}

	size = PyBytes_Size(p);
	printf("[*] Size of the bytes = %ld\n", size);
	printf("[*] Bytes: ");

	data = PyBytes_AsString(p);

	for (i = 0; i < size && i < 10; i++)
	{
		printf("%02hhx", data[i]);
		if (i < size - 1 && i < 9)
			printf(" ");
	}
	printf("\n");
}
