void __thiscall sub_42AA70(int **this, int a2)
{
  int *i; // eax
  int v4; // ecx
  int v5; // eax

  for ( i = *(this + 3); i; i = (int *)i[1] )
  {
    v4 = *i;
    if ( !*i )
      break;
    if ( *(_DWORD *)v4 == a2 )
    {
      ++*(_WORD *)(v4 + 4);
      return;
    }
  }
  v5 = FormHeapAlloc(0xCu);
  if ( v5 )
  {
    *(_DWORD *)v5 = a2;
    *(float *)(v5 + 8) = 0.0;
    *(_WORD *)(v5 + 4) = 0;
    ++*(_WORD *)(v5 + 4);
    BSSimpleList_PushFront(*(this + 3), v5);
  }
  else
  {
    LOWORD(MEMORY[4]) = MEMORY[4] + 1;
    BSSimpleList_PushFront(*(this + 3), 0);
  }
}
