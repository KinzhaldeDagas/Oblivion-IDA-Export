__int16 __thiscall sub_679630(char *this)
{
  TESSaveLoad *v2; // ecx
  _WORD *v3; // eax
  int *v4; // edi
  int v5; // ebx
  int v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // ebp
  char v8; // al
  TESSaveLoad *v9; // ecx
  int *v10; // ebp
  int v11; // ebx
  int v12; // esi
  char *v13; // edi
  __int16 result; // ax
  char v15; // al
  TESSaveLoad *v16; // ecx
  size_t v17; // [esp-4h] [ebp-2Ch]
  size_t v18; // [esp-4h] [ebp-2Ch]
  char v19; // [esp+12h] [ebp-16h]
  char v20; // [esp+13h] [ebp-15h] BYREF
  int v21; // [esp+14h] [ebp-14h]
  int Src; // [esp+18h] [ebp-10h] BYREF
  _WORD *v23; // [esp+1Ch] [ebp-Ch]
  int v24; // [esp+20h] [ebp-8h] BYREF
  char *v25; // [esp+24h] [ebp-4h] BYREF

  v2 = SaveLoad_CurrentSavegame;
  Src = 0;
  v3 = (_WORD *)v2->unk000[5];
  LODWORD(v17) = 2;
  v25 = this;
  v21 = 0;
  v23 = v3;
  SaveLoad_SaveData((int)v2, &Src, v17);
  v4 = (int *)(this + 0x40);
  if ( v4 )
  {
    v5 = (int)v25;
    do
    {
      if ( v4[1] || (v21 |= 1u, v5 = 0, v19 = 1, *v4) )
        v19 = 0;
      if ( (v21 & 1) != 0 )
      {
        v21 &= ~1u;
        if ( v5 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        }
      }
      if ( v19 )
        break;
      v6 = *sub_677C70(v4, &v24);
      if ( v24 )
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v24;
        if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
          (**v7)(v7, 1);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 0x58))(v6) )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x54))(v6);
        LODWORD(v18) = 1;
        v9 = SaveLoad_CurrentSavegame;
        v20 = v8;
        SaveLoad_SaveData((int)v9, &v20, v18);
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x60))(v6);
        ++Src;
      }
      v4 = (int *)v4[1];
    }
    while ( v4 );
  }
  v10 = (int *)(v25 + 0x48);
  if ( v25 == (char *)0xFFFFFFB8 )
  {
    result = Src;
    *v23 = Src;
  }
  else
  {
    v11 = (int)v25;
    while ( 1 )
    {
      if ( v10[1] || (v21 |= 2u, v11 = 0, v19 = 1, *v10) )
        v19 = 0;
      if ( (v21 & 2) != 0 )
      {
        v21 &= ~2u;
        if ( v11 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
            (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        }
      }
      if ( v19 )
        break;
      v12 = *sub_677C70(v10, (int *)&v25);
      if ( v25 )
      {
        v13 = v25;
        if ( !InterlockedDecrement((volatile LONG *)v25 + 1) )
          (**(void (__thiscall ***)(char *, int))v13)(v13, 1);
      }
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x58))(v12);
      if ( (_BYTE)result )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x54))(v12);
        LODWORD(v18) = 1;
        v16 = SaveLoad_CurrentSavegame;
        v20 = v15;
        SaveLoad_SaveData((int)v16, &v20, v18);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x60))(v12);
        ++Src;
      }
      v10 = (int *)v10[1];
      if ( !v10 )
      {
        *v23 = Src;
        return result;
      }
    }
    result = (__int16)v23;
    *v23 = Src;
  }
  return result;
}
