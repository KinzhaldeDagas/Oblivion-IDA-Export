char __thiscall sub_45D390(_BYTE *this, int a2)
{
  UInt32 mainThreadID; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  __int16 v6; // bp
  BSExtraData *v7; // ebp
  int v9; // [esp-8h] [ebp-14h]
  _DWORD *v10; // [esp+8h] [ebp-4h] BYREF

  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x45d397*/
  if ( GetCurrentThreadId() == mainThreadID ) /*0x45d3a5*/
    LOBYTE(v4) = *(this + 0x18); /*0x45d3a7*/
  else
    v4 = *((_DWORD *)this + 6) >> 0x12; /*0x45d3af*/
  LOBYTE(v4) = v4 & 1; /*0x45d3b2*/
  if ( !(_BYTE)v4 ) /*0x45d3b6*/
  {
    v5 = *(_DWORD **)this; /*0x45d3c8*/
    v9 = *(_DWORD *)(a2 + 0xC); /*0x45d3ca*/
    v10 = 0; /*0x45d3cb*/
    NiTMap_GetAt(v5, v9, &v10); /*0x45d3d3*/
    LOBYTE(v4) = (_BYTE)v10; /*0x45d3d8*/
    if ( v10 ) /*0x45d3de*/
    {
      if ( (*v10 & 0x2000000) != 0 ) /*0x45d3e6*/
      {
        LOWORD(v4) = sub_4E0840((_BYTE *)a2); /*0x45d3eb*/
        v6 = v4; /*0x45d3f0*/
        if ( (_WORD)v4 ) /*0x45d3f6*/
        {
          NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B33B80, (int)&aTessaveloadg_1); /*0x45d402*/
          v7 = (BSExtraData *)sub_452310(v6, v6); /*0x45d40f*/
          *((_DWORD *)this + 5) = (char *)&v7->vtbl + 2; /*0x45d416*/
          sub_4E08D0((_DWORD *)a2, (int)this); /*0x45d419*/
          *((_DWORD *)this + 5) = 0; /*0x45d422*/
          ExtraDataList_SetSavedAttachedAnimation((ExtraDataList *)(a2 + 0x44), v7); /*0x45d429*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x40))(a2, 0x1000000); /*0x45d43a*/
          LOBYTE(v4) = NiLeaveCriticalSection_0(&unk_B33B80); /*0x45d441*/
        }
      }
    }
  }
  return v4; /*0x45d447*/
}
