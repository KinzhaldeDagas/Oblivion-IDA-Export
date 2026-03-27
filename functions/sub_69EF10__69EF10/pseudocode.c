int __thiscall sub_69EF10(void *this, int Dst, int a3, float a4)
{
  int v4; // edi
  void *v6; // ebp
  void (__thiscall *v7)(void *); // eax
  char v8; // bl
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // eax
  int v12; // eax
  size_t v14; // [esp+0h] [ebp-1Ch]
  NiObject *v15; // [esp+14h] [ebp-8h]
  UInt32 v16; // [esp+18h] [ebp-4h]

  v4 = Dst;
  nullsub_18(Dst, a3, 0);
  v6 = *((void **)this + 0xB);
  if ( v4 )
    *((_DWORD *)this + 0xB) = (*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18)
                                                         + 0x14))(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x18);
  else
    *((float *)this + 0xB) = a4;
  v7 = *(void (__thiscall **)(void *))(*(_DWORD *)this + 0x68);
  Dst = *((int *)this + 8);
  v8 = *((_BYTE *)this + 0x24);
  v7(this);
  *((float *)this + 8) = *(float *)&Dst;
  *((_BYTE *)this + 0x24) = v8;
  if ( v6 )
  {
    LODWORD(v14) = 2;
    v16 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_CurrentSavegame->unk000[5] = (UInt32)v6;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v14);
    v9 = *((_DWORD *)this + 0xC);
    if ( v9 )
    {
      v15 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v9 + 0xC));
      if ( v15 )
      {
        v10 = a3;
        a4 = flt_A30634;
        if ( a3 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) )
          {
            if ( v4 )
            {
              v11 = OblivionDynamicCast(
                      *(void **)(v10 + 0x58),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                      &MiddleHighProcess `RTTI Type Descriptor',
                      0);
              if ( v11 )
              {
                v12 = v11[0x5F];
                if ( v12 )
                  a4 = *(float *)(v12 + 0x94);
              }
            }
          }
        }
        sub_4DA8F0(v4, (int)this, (int)v15, *((NiAVObject **)this + 0xC), a4);
      }
    }
    SaveLoad_CurrentSavegame->unk000[5] = v16;
    MemoryHeap_Free_checked(v6);
  }
  return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 0x50))(this, 0.0);
}
