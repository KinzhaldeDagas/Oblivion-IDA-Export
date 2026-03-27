void __thiscall sub_67B260(int this, PlayerCharacter *a2, char a3, char a4, int a5)
{
  _DWORD **v5; // esi
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax

  v5 = (_DWORD **)this;
  if ( a2 != TESDataHandler_g_PlayerRef )
  {
    if ( !a4 )
    {
      if ( a3 )
      {
        BSSimpleList_PushBack(*(_DWORD **)(this + 8), (int)a2);
        a2->super.super.super.process->GetCurHour(a2->super.super.super.process);
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)(*v5)[0x16] + 0x28))((*v5)[0x16]);
      }
      else
      {
        BSSimpleList_PushFront((_DWORD *)this, (int)a2);
        a2->super.super.super.process->GetCurHour(a2->super.super.super.process);
        v6 = *(_DWORD *)(*v5[2] + 0x58);
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x28))(v6);
      }
      goto LABEL_16;
    }
    if ( this )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(this + 4);
        if ( !v7 && !*(_DWORD *)this )
          goto LABEL_16;
        if ( *(_DWORD *)this == a5 )
          break;
        this = *(_DWORD *)(this + 4);
        if ( !v7 )
          goto LABEL_16;
      }
      if ( !a3 )
      {
LABEL_15:
        BSSimpleList_PushFront((_DWORD *)this, (int)a2);
        goto LABEL_16;
      }
      if ( v7 )
      {
        this = *(_DWORD *)(this + 4);
        goto LABEL_15;
      }
      BSSimpleList_PushBack((_DWORD *)this, (int)a2);
    }
LABEL_16:
    v8 = (_DWORD *)v5[2][1];
    if ( v8 )
      v5[2] = v8;
  }
}
