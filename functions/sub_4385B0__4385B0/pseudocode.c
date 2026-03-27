void __stdcall sub_4385B0(const char *a1, int a2, int a3)
{
  const char *v3; // edi
  int v4; // esi
  char *v5; // eax
  QueuedDistantLOD *v6; // esi

  v3 = a1;
  if ( a1 )
  {
    if ( *a1 )
    {
      v4 = a2;
      if ( a2 )
      {
        if ( *(_DWORD *)(a2 + 0x1C) )
        {
          v5 = (char *)FormHeapAlloc(0x40u);
          a1 = v5;
          if ( v5 )
            v6 = QueuedDistantLOD::QueuedDistantLOD((QueuedDistantLOD *)v5, v3, 5u, v4);
          else
            v6 = 0;
          a1 = (const char *)v6;
          if ( v6 )
            InterlockedIncrement((volatile LONG *)v6 + 2);
          (*(void (__thiscall **)(QueuedDistantLOD *, int))(*(_DWORD *)v6 + 0x30))(v6, a3);
          sub_4BDDC0(&a1);
        }
      }
    }
  }
}
