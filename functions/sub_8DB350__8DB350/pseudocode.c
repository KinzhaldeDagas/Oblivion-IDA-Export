int __thiscall sub_8DB350(int *this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // [esp+Ch] [ebp-18h] BYREF
  int v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  int v11; // [esp+18h] [ebp-Ch]
  int *v12; // [esp+20h] [ebp-4h]

  v3 = *(this + 4); /*0x8db35f*/
  v4 = *(this + 3); /*0x8db363*/
  LOWORD(v8) = a2; /*0x8db366*/
  v9 = 0; /*0x8db36b*/
  v10 = v4; /*0x8db373*/
  v11 = v3; /*0x8db377*/
  v12 = this; /*0x8db37b*/
  if ( (_WORD)a2 != 0xFFFF ) /*0x8db37f*/
  {
    v5 = (*(int (__thiscall **)(int *, int))(*this + 0x20))(this, a2); /*0x8db384*/
    if ( v5 ) /*0x8db389*/
      v9 = v5 + 8; /*0x8db38e*/
    else
      v9 = 0; /*0x8db394*/
  }
  sub_8DC920((int)&v8, *(this + 2), (int)&v8); /*0x8db3a5*/
  v6 = *(_DWORD *)(v4 + 0x98); /*0x8db3aa*/
  if ( v6 ) /*0x8db3b5*/
    sub_8DC0A0(v6, v4, (int)&v8); /*0x8db3bd*/
  result = *(_DWORD *)(v3 + 0x98); /*0x8db3c5*/
  if ( result ) /*0x8db3cd*/
    return sub_8DC0A0((int)&v8, v3, (int)&v8); /*0x8db3d5*/
  return result; /*0x8db3dd*/
}
