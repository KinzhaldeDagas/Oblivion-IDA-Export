void __userpurge ShowMessageBox__(
        char *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        const char *a6,
        int a7)
{
  ShowUIMessageBox(a1, a2, a3, a4, a5, a6, 0, 1, (const char *)sOk, 0);
  FormHeapFree((unsigned int)a6);
}
