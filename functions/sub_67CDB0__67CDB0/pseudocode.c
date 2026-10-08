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

  v4 = this; /*0x67cdb9*/
  if ( a2 ) /*0x67cdbf*/
  {
    v5 = FormHeapAlloc(0xCu); /*0x67cdd2*/
    v6 = !Actor_IsGuardClass(a2); /*0x67cdd9*/
    v7 = reference; /*0x67cddb*/
    if ( !v6 && (LOBYTE(v7->unk738) || v7->unk610) ) /*0x67cdeb*/
    {
      a2->members.super.process->SetUnk01E(a2->members.super.process, 0); /*0x67ce01*/
      v8 = 0; /*0x67ce03*/
    }
    else if ( a2 == (Actor *)v7 && (LOBYTE(v7->unk738) || v7->unk610) ) /*0x67ce14*/
    {
      v8 = 1; /*0x67ce1d*/
    }
    else
    {
      v8 = a3; /*0x67ce21*/
    }
    *(_BYTE *)(v5 + 4) = v8; /*0x67ce25*/
    *(_DWORD *)v5 = a2; /*0x67ce2e*/
    *(_DWORD *)(v5 + 8) = 0; /*0x67ce30*/
    if ( a4 == (char)0xFF ) /*0x67ce37*/
    {
      v9 = *v4; /*0x67ce45*/
      v13 = 0; /*0x67ce49*/
      v14 = 0; /*0x67ce4e*/
      if ( !*v4 ) /*0x67ce45*/
        goto LABEL_21; /*0x67ce45*/
      do /*0x67ceb7*/
      {
        v10 = (_DWORD *)*v9; /*0x67ce58*/
        if ( !*v9 ) /*0x67ce58*/
          break; /*0x67ce5c*/
        v15 = *(_DWORD *)(v5 + 8); /*0x67ce6c*/
        if ( ((int (__thiscall *)(Actor *, _DWORD))a2->vtbl->GetDisposition)(a2, *v10) >= 0x50 ) /*0x67ce78*/
        {
          if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 0x330))(*v10) /*0x67ce99*/
            || (v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 0x330))(*v10),
                !sub_613670(v11, (int)a2)) )
          {
            *(_DWORD *)(v5 + 8) = v10[2]; /*0x67cea5*/
            v13 = 1; /*0x67cea8*/
          }
        }
        v9 = (int *)v9[1]; /*0x67cead*/
        v14 = v15 + 1; /*0x67ceb0*/
      }
      while ( v9 ); /*0x67ceb7*/
      v4 = this; /*0x67cebe*/
      if ( !v13 ) /*0x67cec2*/
LABEL_21:
        *(_DWORD *)(v5 + 8) = v14; /*0x67cec8*/
    }
    else
    {
      *(_DWORD *)(v5 + 8) = a4; /*0x67ce3c*/
    }
    if ( !*v4 || sub_67B6B0(v4, (int)a2, 0) ) /*0x67ced6*/
      FormHeapFree(v5); /*0x67ceef*/
    else
      BSSimpleList_PushFront(*v4, v5); /*0x67cee2*/
  }
}
