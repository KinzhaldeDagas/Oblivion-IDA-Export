void __usercall ActiveEffect_Base_CreateDynamic_::Wrapup(
        int a1@<eax>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27)
{
  if ( a1 ) /*0x68ed7c*/
    *(_DWORD *)(a1 + 0x30) = a27; /*0x68ed82*/
  ActiveEffect_Base_CreateDynamic_::Epilogue(); /*0x68ed7c*/
}
