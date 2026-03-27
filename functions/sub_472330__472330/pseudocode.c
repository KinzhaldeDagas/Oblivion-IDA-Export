void __thiscall sub_472330(_DWORD **this, int a2)
{
  int v2; // esi
  int v3; // eax
  double v4; // st7

  if ( sub_470960(*(this + 0x27), a2, &a2) )
  {
    v2 = a2;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2) )
    {
      if ( (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x10))(v2, 0xFFFFFFFF) )
      {
        v3 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v2 + 0x10))(v2, 0xFFFFFFFF);
        v4 = sub_51AED0((float *)*(_DWORD *)(v3 + 0x68));
        Double_To_SInt32(v4);
      }
    }
  }
}
