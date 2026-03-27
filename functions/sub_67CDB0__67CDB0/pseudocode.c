void __thiscall sub_67CDB0(int **this, Actor *a2, char a3, char a4)
{
  int **v4; // esi
  int v5; // ebx
  bool v6; // zf
  PlayerCharacter *v7; // eax
  char v8; // al
  int *v9; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  char v13; // [esp+14h] [ebp+8h]
  int v14; // [esp+18h] [ebp+Ch]
  int v15; // [esp+18h] [ebp+Ch]

  v4 = this;
  if ( a2 )
  {
    v5 = FormHeapAlloc(0xCu);
    v6 = !sub_5E6C60(a2);
    v7 = TESDataHandler_g_PlayerRef;
    if ( !v6 && (LOBYTE(v7->unk738) || v7->unk610) )
    {
      a2->members.super.process->SetUnk01E(a2->members.super.process, 0);
      v8 = 0;
    }
    else if ( a2 == (Actor *)v7 && (LOBYTE(v7->unk738) || v7->unk610) )
    {
      v8 = 1;
    }
    else
    {
      v8 = a3;
    }
    *(_BYTE *)(v5 + 4) = v8;
    *(_DWORD *)v5 = a2;
    *(_DWORD *)(v5 + 8) = 0;
    if ( a4 == (char)0xFF )
    {
      v9 = *v4;
      v13 = 0;
      v14 = 0;
      if ( !*v4 )
        goto LABEL_21;
      do
      {
        v10 = (_DWORD *)*v9;
        if ( !*v9 )
          break;
        v15 = *(_DWORD *)(v5 + 8);
        if ( ((int (__thiscall *)(Actor *, _DWORD))a2->vtbl->GetDisposition)(a2, *v10) >= 0x50 )
        {
          if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 0x330))(*v10)
            || (v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 0x330))(*v10),
                !sub_613670(v11, (int)a2)) )
          {
            *(_DWORD *)(v5 + 8) = v10[2];
            v13 = 1;
          }
        }
        v9 = (int *)v9[1];
        v14 = v15 + 1;
      }
      while ( v9 );
      v4 = this;
      if ( !v13 )
LABEL_21:
        *(_DWORD *)(v5 + 8) = v14;
    }
    else
    {
      *(_DWORD *)(v5 + 8) = a4;
    }
    if ( !*v4 || sub_67B6B0(v4, (int)a2, 0) )
      FormHeapFree(v5);
    else
      BSSimpleList_PushFront(*v4, v5);
  }
}
