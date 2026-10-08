void __thiscall sub_68BD40(const TravelPathNode **this, Actor *a2, NiPoint3 *other)
{
  const NiPoint3 *v4; // eax

  if ( a2 ) /*0x68bd4a*/
  {
    sub_68A160(this); /*0x68bd52*/
    if ( NiPoint3__NotEqual(v4, other) /*0x68bd69*/
      || (*(unsigned __int8 (__thiscall **)(const TravelPathNode **))&(*this)[1].type)(this) )
    {
      sub_68AFB0((TravelPath *)this, a2, other); /*0x68bd73*/
      if ( !sub_6825C0((_DWORD *)unk_B3BF80, a2) ) /*0x68bd7f*/
        (*(void (__thiscall **)(const TravelPathNode **, Actor *, NiPoint3 *, _DWORD))&(*this)[2].type)( /*0x68bd93*/
          this,
          a2,
          other,
          0);
    }
  }
}
