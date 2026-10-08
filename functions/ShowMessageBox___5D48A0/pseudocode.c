void __userpurge ShowMessageBox__(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char *a5, int a6)
{
  ShowUIMessageBox(a1, a2, a3, a4, a5, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5d48da*/
  FormHeapFree((unsigned int)a5); /*0x5d48e0*/
}
