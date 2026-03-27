void __thiscall sub_4E4F20(_DWORD *this)
{
  unsigned __int16 **v2; // esi
  unsigned __int16 v3; // ax
  int *v4; // ecx

  if ( *(this + 9) )
  {
    v2 = (unsigned __int16 **)(this + 0xA);
    if ( this != (_DWORD *)0xFFFFFFD8 )
    {
      do
      {
        if ( !v2[1] && !*v2 )
          break;
        v3 = **v2;
        if ( v3 < *((_WORD *)this + 0x18) )
        {
          v4 = *(int **)(*(_DWORD *)(*(this + 9) + 4) + 4 * v3);
          if ( v4 )
            sub_4E7FB0(v4, (int)(*v2 + 2));
        }
        v2 = (unsigned __int16 **)v2[1];
      }
      while ( v2 );
    }
  }
}
