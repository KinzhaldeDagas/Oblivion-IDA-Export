bool *__thiscall sub_8F5DB0(_DWORD *this, bool *a2)
{
  int v2; // eax
  char v3; // dl
  char v5; // [esp+1h] [ebp-1h] BYREF

  v5 = HIBYTE(this); /*0x8f5db0*/
  v2 = *(this + 2); /*0x8f5db1*/
  if ( v2 ) /*0x8f5db6*/
  {
    v3 = *(_BYTE *)(*(int (__stdcall **)(char *))(*(_DWORD *)v2 + 8))(&v5); /*0x8f5dc4*/
    *a2 = v3; /*0x8f5dca*/
    return a2; /*0x8f5dc6*/
  }
  else
  {
    *a2 = *(this + 4) != *(this + 5); /*0x8f5de7*/
    return a2; /*0x8f5de3*/
  }
}
