void __thiscall sub_54FC30(unsigned int **this, int a2, int a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  unsigned int **v8; // ebx
  unsigned int v9; // eax
  int v10; // ebp
  unsigned int *v11; // edx
  unsigned int *v12; // eax
  void (__stdcall *v13)(volatile LONG *); // ebp
  signed int v14; // eax
  unsigned int v16; // [esp+14h] [ebp-20h] BYREF
  unsigned int v17; // [esp+18h] [ebp-1Ch]
  unsigned int *v18; // [esp+1Ch] [ebp-18h] BYREF
  DWORD TickCount; // [esp+20h] [ebp-14h]
  int v20; // [esp+24h] [ebp-10h] BYREF
  int v21; // [esp+30h] [ebp-4h]

  v4 = 0; /*0x54fc59*/
  v5 = 0; /*0x54fc5b*/
  v16 = 0; /*0x54fc5d*/
  v21 = 1; /*0x54fc61*/
  v17 = 0; /*0x54fc65*/
  TickCount = GetTickCount(); /*0x54fc79*/
  EnterCriticalSection(&unk_B39C00); /*0x54fc7d*/
  CurrentThreadId = GetCurrentThreadId(); /*0x54fc83*/
  ++unk_B39C7C; /*0x54fc89*/
  unk_B39C78 = CurrentThreadId; /*0x54fc90*/
  v7 = (unsigned int)*(this + 2); /*0x54fc95*/
  v8 = this + 1; /*0x54fc98*/
  v9 = 0; /*0x54fc9b*/
  if ( v7 ) /*0x54fc9f*/
  {
    v10 = (int)*(this + 3); /*0x54fca1*/
    v11 = v8[2]; /*0x54fca4*/
    while ( !*v11 ) /*0x54fca9*/
    {
      ++v9; /*0x54fcab*/
      ++v11; /*0x54fcae*/
      if ( v9 >= v7 ) /*0x54fcb3*/
        goto LABEL_5; /*0x54fcb3*/
    }
    v12 = *(unsigned int **)(v10 + 4 * v9); /*0x54fd08*/
  }
  else
  {
LABEL_5:
    v12 = 0; /*0x54fcb5*/
  }
  v18 = v12; /*0x54fcb9*/
  if ( !v12 ) /*0x54fcbd*/
    goto LABEL_29; /*0x54fcbd*/
  v13 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x54fcc3*/
  do /*0x54fd5b*/
  {
    sub_7B2600(v8, &v18, &v20, &v16); /*0x54fce1*/
    v4 = v16; /*0x54fce6*/
    if ( v16 == a3 ) /*0x54fcee*/
      continue; /*0x54fcee*/
    if ( a2 ) /*0x54fcf7*/
    {
      if ( a2 != 1 ) /*0x54fcfc*/
        continue; /*0x54fcfc*/
      v14 = sub_556650(*(_DWORD **)(v16 + 8)); /*0x54fd01*/
    }
    else
    {
      v14 = sub_5564E0(*(_DWORD **)(v16 + 8)); /*0x54fd11*/
    }
    if ( v14 ) /*0x54fd18*/
    {
      if ( !v5 ) /*0x54fd1c*/
        goto LABEL_20; /*0x54fd1c*/
      if ( TickCount - *(_DWORD *)(v4 + 0xC) > TickCount - *(_DWORD *)(v5 + 0xC) && v5 != v4 ) /*0x54fd30*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x54fd36*/
          (**(void (__thiscall ***)(unsigned int, int))v5)(v5, 1); /*0x54fd48*/
LABEL_20:
        v5 = v4; /*0x54fd4a*/
        v17 = v4; /*0x54fd50*/
        v13((volatile LONG *)(v4 + 4)); /*0x54fd54*/
      }
    }
  }
  while ( v18 ); /*0x54fd5b*/
  if ( v5 ) /*0x54fd63*/
  {
    if ( NiTryEnterCS(&unk_B39C80, (int)"BSFaceGenModelMap::FreeLRUData()") ) /*0x54fd6f*/
    {
      if ( a2 ) /*0x54fd7f*/
      {
        if ( a2 == 1 ) /*0x54fd84*/
          sub_559C40(*(volatile LONG **)(v5 + 8)); /*0x54fd89*/
      }
      else
      {
        sub_559BA0(*(volatile LONG **)(v5 + 8)); /*0x54fd93*/
      }
      NiLeaveCriticalSection_0(&unk_B39C80); /*0x54fd9d*/
    }
  }
LABEL_29:
  if ( unk_B39C7C-- == 1 ) /*0x54fda2*/
    unk_B39C78 = 0; /*0x54fdab*/
  LeaveCriticalSection(&unk_B39C00); /*0x54fdba*/
  LOBYTE(v21) = 0; /*0x54fdc2*/
  if ( v5 ) /*0x54fdc7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x54fdcd*/
      (**(void (__thiscall ***)(unsigned int, int))v5)(v5, 1); /*0x54fddf*/
  }
  v21 = 0xFFFFFFFF; /*0x54fde3*/
  if ( v4 ) /*0x54fdeb*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x54fdf1*/
      (**(void (__thiscall ***)(unsigned int, int))v4)(v4, 1); /*0x54fe03*/
  }
}
