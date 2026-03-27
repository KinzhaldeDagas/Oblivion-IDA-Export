void __thiscall ExtraRunOncePacks::~ExtraRunOncePacks(ExtraRunOncePacks *this)
{
  unsigned int *v2; // esi
  _DWORD *v3; // esi
  int v4; // edi

  v2 = *((unsigned int **)this + 3);
  for ( *(_DWORD *)this = &ExtraRunOncePacks::`vftable'; v2; v2 = (unsigned int *)v2[1] )
  {
    if ( !*v2 )
      break;
    FormHeapFree(*v2);
  }
  v3 = *((_DWORD **)this + 3);
  if ( v3[1] )
  {
    do
    {
      v4 = *(_DWORD *)(v3[1] + 4);
      FormHeapFree(v3[1]);
      v3[1] = v4;
    }
    while ( v4 );
  }
  *v3 = 0;
  FormHeapFree(*((_DWORD *)this + 3));
  *(_DWORD *)this = &BSExtraData::`vftable';
}
