char __thiscall sub_60BE90(unsigned int *this)
{
  int v2; // eax
  int v3; // eax
  int *v5; // eax
  char v6; // al

  if ( !*(this + 0x17) )
    return 0;
  if ( !(*(int (__thiscall **)(unsigned int *))(*this + 0x154))(this)
    || (v2 = (*(int (__thiscall **)(unsigned int *))(*this + 0x154))(this), (v3 = sub_480340(v2)) == 0) )
  {
    PrintError("No collision data was found on this arrow");
    FormHeapFree(*(this + 0x17));
    *(this + 0x17) = 0;
    return 0;
  }
  v5 = *(int **)(v3 + 0x10);
  switch ( *(_DWORD *)*(this + 0x17) )
  {
    case 0:
      v6 = sub_608FC0(this, (int)v5);
      break;
    case 1:
      v6 = sub_609150(this, v5);
      break;
    case 2:
      v6 = sub_6094C0((TESObjectREFR *)this, v5);
      break;
    case 3:
      v6 = sub_6095B0(this, v5);
      break;
    case 4:
      v6 = sub_6098C0(this, v5);
      break;
    default:
      JUMPOUT(0x60BF2F);
  }
  if ( v6 )
    JUMPOUT(0x60BF4D);
  return def_60BEF2();
}
