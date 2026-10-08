NiTListBase<DFALL<Tile *>,Tile *> *__thiscall NiTListBase<DFALL<Tile *>,Tile *>::NiTListBase<DFALL<Tile *>,Tile *>(
        NiTListBase<DFALL<Tile *>,Tile *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<Tile *>,Tile *>::`vftable'; /*0x57d468*/
  if ( (a2 & 1) != 0 ) /*0x57d46e*/
    FormHeapFree((unsigned int)this); /*0x57d471*/
  return this; /*0x57d47b*/
}
