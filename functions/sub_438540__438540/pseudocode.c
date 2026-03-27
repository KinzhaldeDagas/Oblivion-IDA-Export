void __thiscall sub_438540(_DWORD *this, int a2, char a3)
{
  int v4; // ecx
  unsigned int *v5; // esi
  volatile LONG *v6; // [esp+Ch] [ebp-4h] BYREF

  v4 = *(this + 1);
  v6 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int, volatile LONG **))(*(_DWORD *)v4 + 4))(v4, a2, &v6) )
  {
    InterlockedDecrement(v6 + 3);
    if ( a3 )
    {
      if ( !*((_DWORD *)v6 + 3) )
      {
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 1) + 0x10))(*(this + 1), a2);
        v5 = (unsigned int *)v6;
        if ( v6 )
        {
          sub_436CB0((unsigned int *)v6);
          FormHeapFree((unsigned int)v5);
        }
      }
    }
  }
}
