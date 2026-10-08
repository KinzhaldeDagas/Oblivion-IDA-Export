double __thiscall sub_61FF40(int this)
{
  double v3; // st6
  double result; // st7
  char v5; // al
  char v6; // al
  char v7; // al
  char ***v8; // eax
  char **v9; // eax
  BSSimpleList_VoidPtr *v10; // edi
  float v11; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(this + 0x70) != 8 && *(float *)(this + 0x138) < *(float *)(this + 0x44) - *(float *)(this + 0x134) ) /*0x61ff64*/
  {
    v11 = unk_B37288; /*0x61ff70*/
    *(float *)(this + 0x134) = *(float *)(this + 0x44); /*0x61ff77*/
    *(float *)(this + 0x138) = v11; /*0x61ff81*/
    v3 = kTerrainLODQuadRayDirectionZ; /*0x61ff87*/
    *(float *)(this + 0x13C) = kTerrainLODQuadRayDirectionZ; /*0x61ff8d*/
    if ( *(_DWORD *)(this + 0x178) > (int)stru_B372B0.value /*0x61ffbd*/
      || Actor_IsSwimming(*(Actor **)(this + 0x3C))
      || (result = sub_61D9B0(this, v3, (char **)*(_DWORD *)(this + 0x9C)), !v5) )
    {
      result = sub_61D9B0(this, v3, (char **)*(_DWORD *)(this + 0x94)); /*0x61ffc8*/
      if ( !v6 ) /*0x61ffcf*/
      {
        result = sub_61D9B0(this, v3, (char **)*(_DWORD *)(this + 0x98)); /*0x61ffda*/
        if ( !v7 ) /*0x61ffe1*/
        {
          if ( !*(_DWORD *)(this + 0x90) ) /*0x61ffe3*/
          {
            v8 = *(char ****)(this + 0x68); /*0x61ffec*/
            if ( v8 ) /*0x61fff1*/
            {
              v9 = *v8; /*0x61fff3*/
              *(_DWORD *)(this + 0x90) = v9; /*0x61fff7*/
              if ( v9 ) /*0x61fffd*/
                MagicItem_LoadVFXModels(*v9, 0); /*0x620003*/
              BSSimpleList_PopHeadWithoutPayloadFree(*(_DWORD **)(this + 0x68)); /*0x62000c*/
              v10 = *(BSSimpleList_VoidPtr **)(this + 0x68); /*0x620011*/
              if ( BSSimpleList_IsEmpty(v10) ) /*0x620016*/
              {
                FormHeapFree((unsigned int)v10); /*0x620020*/
                *(_DWORD *)(this + 0x68) = 0; /*0x620028*/
              }
            }
          }
          return sub_61D9B0(this, v3, (char **)*(_DWORD *)(this + 0x90)); /*0x620039*/
        }
      }
    }
  }
  return result; /*0x62003e*/
}
