void __thiscall sub_676F90(ActorProcessManager *this, Actor *a2)
{
  int i; // ebx
  int *v3; // ebp
  int *v4; // edi
  unsigned int v5; // esi

  for ( i = 0; i < 6; ++i )
  {
    v3 = (int *)*(&this->unk28 + i);
    v4 = v3;
    if ( v3 )
    {
      while ( v4[1] || *v4 )
      {
        v5 = *v4;
        if ( *v4 )
        {
          if ( *(Actor **)(v5 + 0xC) == a2 || *(Actor **)(v5 + 8) == a2 )
          {
            BSSimpleList_Remove(v3, *v4);
            sub_605E80((unsigned int *)v5);
            FormHeapFree(v5);
            i = 0;
            break;
          }
          sub_607110((_DWORD *)v5, (int)a2);
        }
        v4 = (int *)v4[1];
        if ( !v4 )
          break;
      }
    }
  }
}
