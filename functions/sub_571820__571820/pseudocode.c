void __usercall sub_571820(char *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  char *v6; // esi
  InterfaceManager *Singleton; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  NiAVObject *v9; // edi
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h] BYREF

  nullsub_returnTrue_0arg();
  v5 = InterlockedDecrement;
  v6 = this + 0xC;
  v13 = 0xC8;
  do
  {
    if ( *(_DWORD *)v6 )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      Singleton->unk070->vtbl->RemoveObject(Singleton->unk070, (NiAVObject **)&v14, *(NiAVObject **)v6);
      if ( v14 )
      {
        v8 = (void (__thiscall ***)(_DWORD, int))v14;
        if ( !v5((volatile LONG *)(v14 + 4)) )
          (**v8)(v8, 1);
      }
      v9 = *(NiAVObject **)v6;
      if ( *(_DWORD *)v6 )
      {
        if ( !v5((volatile LONG *)&v9->members) )
        {
          if ( v9 )
            v9->vtbl->super.super.Destructor((NiRefObject *)v9, 1);
        }
        *(_DWORD *)v6 = 0;
      }
      __asm { fldz }
      *((_DWORD *)v6 + 0xFFFFFFFF) = 0;
      __asm { fst     dword ptr [esi-0Ch] }
      *((float *)v6 + 0xFFFFFFFD) = _ET1;
      __asm { fstp    dword ptr [esi-8] }
      *((float *)v6 + 0xFFFFFFFE) = _ET1;
      FormHeapFree(*((_DWORD *)v6 + 1));
      __asm { fld     dword ptr ds:0A30634h }
      *((_DWORD *)v6 + 1) = 0;
      *((_WORD *)v6 + 5) = 0;
      *((_WORD *)v6 + 4) = 0;
      __asm { fstp    dword ptr [esi+0Ch] }
      *((float *)v6 + 3) = _ET1;
    }
    v6 += 0x1C;
    --v13;
  }
  while ( v13 );
  nullsub_returnTrue_0arg();
}
