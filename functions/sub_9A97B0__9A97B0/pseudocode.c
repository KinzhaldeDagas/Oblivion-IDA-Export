void __thiscall sub_9A97B0(unsigned __int16 *this)
{
  unsigned int v2; // ecx
  LONG v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  LONG *v6; // ebp
  LONG *v7; // ebp
  unsigned int v8; // [esp+Ch] [ebp-Ch]
  unsigned int v9; // [esp+10h] [ebp-8h]
  LONG v10; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 0xB);
  v3 = 0;
  v4 = 0xFFFFFFFF;
  v10 = 0;
  v9 = v2;
  if ( v2 <= 1 )
    return;
  v5 = 0;
  v8 = 0;
  do
  {
    v6 = (LONG *)(*((_DWORD *)this + 4) + 4 * v5);
    if ( v3 != *v6 )
    {
      if ( v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
          (**(void (__thiscall ***)(LONG, int))v3)(v3, 1);
        v5 = v8;
      }
      v3 = *v6;
      v10 = *v6;
      if ( !v10 )
        goto LABEL_26;
      InterlockedIncrement((volatile LONG *)(v3 + 4));
      v5 = v8;
    }
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 8) == 1 )
      {
        if ( v4 < v5 )
        {
          sub_9A9670((_DWORD *)this + 3, v5, (LONG *)(*((_DWORD *)this + 4) + 4 * v4));
          sub_9A9670((_DWORD *)this + 3, v4++, &v10);
          if ( v4 >= v9 )
            goto LABEL_28;
          while ( 1 )
          {
            v7 = (LONG *)(*((_DWORD *)this + 4) + 4 * v4);
            if ( v3 != *v7 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
                (**(void (__thiscall ***)(LONG, int))v3)(v3, 1);
              v3 = *v7;
              v10 = *v7;
              if ( v10 )
                InterlockedIncrement((volatile LONG *)(v3 + 4));
            }
            if ( !*(_BYTE *)(v3 + 8) )
              break;
            if ( ++v4 >= v9 )
              goto LABEL_28;
          }
          if ( v4 >= v9 )
            goto LABEL_28;
          v5 = v8;
        }
      }
      else if ( v4 > v5 )
      {
        v4 = v5;
      }
    }
LABEL_26:
    v8 = ++v5;
  }
  while ( v5 < v9 );
  if ( !v3 )
    return;
LABEL_28:
  if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(LONG, int))v3)(v3, 1);
}
