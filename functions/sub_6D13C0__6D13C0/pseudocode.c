void __thiscall sub_6D13C0(int this, float a2)
{
  _DWORD *v3; // edi

  if ( *(_DWORD *)(this + 0x50) )
  {
    if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
    {
      *(_BYTE *)(this + 0x58) = 1;
      *(float *)(this + 0x28) = flt_A7A164;
    }
    else if ( !sub_6C36B0((float *)this, a2) || *(_BYTE *)(this + 0x5A) )
    {
      *(_BYTE *)(this + 0x58) = 1;
    }
    if ( *(_DWORD *)(this + 0x30) )
    {
      if ( *(_BYTE *)(this + 0x58) )
      {
        sub_6D0B60((float *)this, COERCE_INT(*(float *)(this + 0x28)));
        if ( byte_B3CE19 )
        {
          if ( sub_404DD0() )
          {
            if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0x30) + 0xB4) + 4) == 1 )
            {
              v3 = (_DWORD *)sub_6EBF20();
              if ( v3 )
              {
                sub_6EBC20(v3, this, *(_DWORD *)(this + 0x30));
                if ( !(unsigned __int8)sub_6D0660((void *)dword_B3F940, (int)v3, 2) )
                  (*(void (__thiscall **)(_DWORD *))(*v3 + 0x54))(v3);
              }
            }
          }
        }
      }
    }
  }
}
