void __thiscall sub_55AAF0(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  void (__cdecl *v7)(int, int, int, int, int); // edx

  switch ( a6 ) /*0x55aaf9*/
  {
    case 0: /*0x55aaf9*/
      (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x40))(a2, a3, a4, a5, a7); /*0x55ab4e*/
      return; /*0x55ab50*/
    case 1: /*0x55aaf9*/
      (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x30))(a2, a3, a4, a5, a7); /*0x55ab21*/
      return; /*0x55ab23*/
    case 2: /*0x55aaf9*/
      v7 = *(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x38); /*0x55ab28*/
      goto LABEL_6; /*0x55ab2b*/
    case 3: /*0x55aaf9*/
      v7 = *(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x48); /*0x55ab55*/
LABEL_6:
      v7(a2, a3, a4, a5, a7); /*0x55ab58*/
      def_55AAF9(a2, a3, a4, a5, a6, a7); /*0x55ab75*/
      return;
    default:
      JUMPOUT(0x55AB76); /*0x55ab76*/
  }
}
