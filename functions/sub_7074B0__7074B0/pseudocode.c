void __thiscall sub_7074B0(_DWORD *this, int a2)
{
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v3 = *(this + 7);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int *, _DWORD *))(*(_DWORD *)v3 + 0x88))(v3, &v5, this);
    v4 = (void (__thiscall ***)(_DWORD, int))v5;
    if ( !v5 )
    {
LABEL_6:
      *(this + 7) = a2;
      return;
    }
    if ( InterlockedDecrement((volatile LONG *)(v5 + 4)) )
    {
      *(this + 7) = a2;
    }
    else
    {
      if ( v4 )
      {
        (**v4)(v4, 1);
        goto LABEL_6;
      }
      *(this + 7) = a2;
    }
  }
  else
  {
    *(this + 7) = a2;
  }
}
