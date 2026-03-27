NiTListBase<DFALL<Tile *>,Tile *> *__thiscall NiTListBase<DFALL<Tile *>,Tile *>::NiTListBase<DFALL<Tile *>,Tile *>(
        NiTListBase<DFALL<Tile *>,Tile *> *this,
        char a2)
{
  *(_DWORD *)this = &NiTListBase<DFALL<Tile *>,Tile *>::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
