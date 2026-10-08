void __thiscall sub_55A950(void *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  void (__cdecl *v7)(int, int, int, int, int); // edx

  switch ( a6 ) /*0x55a959*/
  {
    case 0: /*0x55a959*/
      (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x44))(a2, a3, a4, a5, a7); /*0x55a9ae*/
      return; /*0x55a9b0*/
    case 1: /*0x55a959*/
      (*(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x34))(a2, a3, a4, a5, a7); /*0x55a981*/
      return; /*0x55a983*/
    case 2: /*0x55a959*/
      v7 = *(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x3C); /*0x55a988*/
      goto LABEL_6; /*0x55a98b*/
    case 3: /*0x55a959*/
      v7 = *(void (__cdecl **)(int, int, int, int, int))(*(_DWORD *)this + 0x4C); /*0x55a9b5*/
LABEL_6:
      v7(a2, a3, a4, a5, a7); /*0x55a9b8*/
      def_55A959(a2, a3, a4, a5, a6, a7); /*0x55a9d5*/
      return;
    default:
      JUMPOUT(0x55A9D6); /*0x55a9d6*/
  }
}
