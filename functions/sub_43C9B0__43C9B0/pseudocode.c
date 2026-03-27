void __thiscall sub_43C9B0(_DWORD **this)
{
  void *v2; // ebp
  int v3; // eax
  int v4; // edi
  int *v5; // eax
  IOTask *v6; // ebx
  int v7; // eax
  int v8; // ecx
  char v9; // al
  int v10; // [esp+14h] [ebp-14h] BYREF
  IOTask *v11; // [esp+18h] [ebp-10h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  v2 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8));
  sub_435580(v2, (TESObjectREFR *)*(this + 8));
  v4 = v3;
  if ( v3 )
  {
    if ( strlen((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x14))(v3)) )
    {
      v5 = (int *)sub_43B990(&v11, v2, BYTE2(*(this + 4)), (volatile LONG *)this, (TESObjectREFR *)*(this + 8));
      v12 = 0;
      sub_4348B0((int *)this + 9, v5);
      v12 = 0xFFFFFFFF;
      if ( v11 )
      {
        v6 = v11;
        if ( !InterlockedDecrement((volatile LONG *)&v11->members.unk08) )
          (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1);
      }
      if ( !*(this + 9) )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x14))(v4);
        v8 = *(_DWORD *)ModelLoaderPtr;
        v10 = 0;
        v9 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v8 + 4))(v8, v7, &v10);
        sub_435AB0(this + 0xA, v9 != 0 ? v10 : 0);
      }
    }
  }
}
