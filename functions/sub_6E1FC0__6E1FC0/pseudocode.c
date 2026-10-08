// Oblivion NiTransformData time-range clone. Creates the destination through the native clone path, slices each nonempty channel to [start,end] through the generic key-range copier (content selectors rotation=2, translation=1, scale=0), then transfers each produced array through the matching ownership setter.
int *__thiscall NiTransformData_CloneTimeRange(void *this, int *a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // ax
  int v11; // [esp+28h] [ebp-1Ch] BYREF
  int v12; // [esp+2Ch] [ebp-18h] BYREF
  int v13; // [esp+30h] [ebp-14h]
  int v14; // [esp+34h] [ebp-10h] BYREF
  int v15; // [esp+40h] [ebp-4h]

  v15 = 0; /*0x6e1ff0*/
  v13 = 0; /*0x6e1ff4*/
  v5 = *sub_700790(this, &v14); /*0x6e1ffd*/
  *a2 = v5; /*0x6e2005*/
  if ( v5 ) /*0x6e2007*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6e200d*/
  v6 = (void (__thiscall ***)(_DWORD, int))v14; /*0x6e2013*/
  v15 = 0; /*0x6e2019*/
  v13 = 1; /*0x6e201d*/
  if ( v14 ) /*0x6e2025*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x6e202b*/
    {
      if ( v6 ) /*0x6e2037*/
        (**v6)(v6, 1); /*0x6e2041*/
    }
  }
  v7 = *((_WORD *)this + 4); /*0x6e2043*/
  v12 = 0; /*0x6e204a*/
  v11 = 0; /*0x6e204e*/
  if ( v7 ) /*0x6e2052*/
  {
    NiAnimationKey_CopyRangeRebased(2, *((_DWORD *)this + 4), *((float **)this + 8), v7, a3, a4, (int **)&v12, &v11); /*0x6e207e*/
    NiTransformData_SetRotationKeys(*a2, v12, v11, *((_DWORD *)this + 4)); /*0x6e2096*/
  }
  v8 = *((_WORD *)this + 5); /*0x6e209b*/
  if ( v8 ) /*0x6e20a2*/
  {
    NiAnimationKey_CopyRangeRebased(1, *((_DWORD *)this + 5), *((float **)this + 9), v8, a3, a4, (int **)&v12, &v11); /*0x6e20ce*/
    NiTransformData_SetTranslationKeys((_DWORD *)*a2, v12, v11, *((_DWORD *)this + 5)); /*0x6e20e6*/
  }
  v9 = *((_WORD *)this + 6); /*0x6e20eb*/
  if ( v9 ) /*0x6e20f2*/
  {
    NiAnimationKey_CopyRangeRebased(0, *((_DWORD *)this + 6), *((float **)this + 0xA), v9, a3, a4, (int **)&v12, &v11); /*0x6e211d*/
    NiTransformData_SetScaleKeys((_DWORD *)*a2, v12, v11, *((_DWORD *)this + 6)); /*0x6e2135*/
  }
  return a2; /*0x6e213c*/
}
