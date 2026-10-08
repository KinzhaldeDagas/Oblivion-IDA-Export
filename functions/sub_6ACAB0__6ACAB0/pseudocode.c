unsigned int __thiscall sub_6ACAB0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // ecx
  bool v6; // zf
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  BSTextureManager *v10; // ecx
  unsigned int v12[4]; // [esp-4h] [ebp-20h] BYREF
  unsigned int *v13; // [esp+Ch] [ebp-10h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  if ( !bSoundEnabled_Audio ) /*0x6acadc*/
    return 0; /*0x6acadc*/
  v5 = (_DWORD *)*(this + 0xC0); /*0x6acae6*/
  v13 = 0; /*0x6acaf2*/
  NiTMap_GetAt(v5, a2, &v13); /*0x6acafa*/
  if ( v13 ) /*0x6acb05*/
  {
    *v13 |= 0x200u; /*0x6acb12*/
    v6 = *((_BYTE *)this + 0xA6) == 0; /*0x6acb14*/
    v12[0] = 0x14; /*0x6acb1b*/
    if ( v6 ) /*0x6acb1d*/
    {
      v9 = (_DWORD *)FormHeapAlloc(v12[0]); /*0x6acb59*/
      v14 = 1; /*0x6acb67*/
      if ( v9 ) /*0x6acb6f*/
      {
        v13 = v12; /*0x6acb74*/
        v8 = sub_6AA590(v9, 3, a2, a3 + *(_DWORD *)&MEMORY[0xB33E90][0x10], 0, 0); /*0x6acb92*/
        goto LABEL_9; /*0x6acb97*/
      }
    }
    else
    {
      v7 = (_DWORD *)FormHeapAlloc(v12[0]); /*0x6acb1f*/
      v14 = 0; /*0x6acb2d*/
      if ( v7 ) /*0x6acb35*/
      {
        v13 = v12; /*0x6acb3e*/
        v8 = sub_6AA590(v7, 3, a2, -a3, 0, 0); /*0x6acb52*/
LABEL_9:
        v10 = (BSTextureManager *)*(this + 0xC2); /*0x6acb9b*/
        a3 = (int)v8; /*0x6acba6*/
        v14 = 0xFFFFFFFF; /*0x6acbaa*/
        NiTPointerList__AddTail(v10, (void **)&a3); /*0x6acbb2*/
        return 0; /*0x6acbca*/
      }
    }
    v8 = 0; /*0x6acb99*/
    goto LABEL_9; /*0x6acb99*/
  }
  return 0x80004005; /*0x6acbb9*/
}
