char __thiscall sub_45D390(_BYTE *this, int a2)
{
  UInt32 mainThreadID; // esi
  int v4; // eax
  _DWORD *v5; // ecx
  __int16 v6; // bp
  BSExtraData *v7; // ebp
  int v9; // [esp-8h] [ebp-14h]
  _DWORD *v10; // [esp+8h] [ebp-4h] BYREF

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v4) = *(this + 0x18);
  else
    v4 = *((_DWORD *)this + 6) >> 0x12;
  LOBYTE(v4) = v4 & 1;
  if ( !(_BYTE)v4 )
  {
    v5 = *(_DWORD **)this;
    v9 = *(_DWORD *)(a2 + 0xC);
    v10 = 0;
    NiTMap_GetAt(v5, v9, &v10);
    LOBYTE(v4) = (_BYTE)v10;
    if ( v10 )
    {
      if ( (*v10 & 0x2000000) != 0 )
      {
        LOWORD(v4) = sub_4E0840((_BYTE *)a2);
        v6 = v4;
        if ( (_WORD)v4 )
        {
          NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33B80, (int)&aTessaveloadg_1);
          v7 = (BSExtraData *)sub_452310(v6, v6);
          *((_DWORD *)this + 5) = (char *)&v7->vtbl + 2;
          sub_4E08D0((_DWORD *)a2);
          *((_DWORD *)this + 5) = 0;
          sub_4210E0((ExtraDataList *)(a2 + 0x44), v7);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x40))(a2, 0x1000000);
          LOBYTE(v4) = NiLeaveCriticalSection_0(&stru_B33B80);
        }
      }
    }
  }
  return v4;
}
