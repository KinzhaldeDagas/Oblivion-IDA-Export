void __userpurge unknown_libname_88(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6)
{
  void (__cdecl *v6)(int, int); // eax
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  v6 = (void (__cdecl *)(int, int))_NLG_Notify1(a6, a6, &savedregs, a1);
  v6(a2, a3);
  JUMPOUT(0x98C477);
}
