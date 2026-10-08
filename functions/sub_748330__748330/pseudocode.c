int __thiscall sub_748330(_DWORD *this, _BYTE *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  int v5; // esi
  _BYTE *v6; // ebp
  int (__cdecl *v7)(_DWORD *, _BYTE **, int, int *, int); // eax
  int v8; // eax
  _DWORD *v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h] BYREF

  v3 = 1; /*0x748336*/
  v4 = 0; /*0x74833b*/
  v5 = 0; /*0x74833d*/
  v10 = this; /*0x748343*/
  if ( a3 <= 1 ) /*0x748347*/
  {
    *a2 = 0; /*0x7483ad*/
    return 0; /*0x7483aa*/
  }
  else
  {
    v6 = a2; /*0x74834a*/
    while ( 1 ) /*0x74835b*/
    {
      v7 = (int (__cdecl *)(_DWORD *, _BYTE **, int, int *, int))*(this + 1); /*0x74835b*/
      v11 = 1; /*0x748366*/
      v8 = v7(this, &a2, 1, &v11, 1); /*0x74836e*/
      v4 += v8; /*0x748373*/
      if ( v8 != 1 ) /*0x748378*/
        break; /*0x748378*/
      if ( (_BYTE)a2 == 0xA ) /*0x748380*/
        break; /*0x748380*/
      if ( (_BYTE)a2 != 0xD ) /*0x748384*/
      {
        v6[v3 - 1] = (_BYTE)a2; /*0x748386*/
        ++v5; /*0x74838a*/
        ++v3; /*0x74838d*/
      }
      if ( v3 >= a3 ) /*0x748394*/
        break; /*0x748394*/
      this = v10; /*0x748350*/
    }
    v6[v5] = 0; /*0x748396*/
    return v4; /*0x74839b*/
  }
}
