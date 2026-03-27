Sky *__thiscall Sky::Sky(Sky *this)
{
  double v2; // st7
  UInt32 *unk03C; // ebp
  UInt32 *v4; // eax
  int i; // ecx
  NiNode *nodeSkyRoot; // edi
  NiNode *nodeMoonsRoot; // edi
  double v8; // st6
  UInt32 *v9; // eax
  int v10; // ecx
  float v11; // edx
  _DWORD *v12; // eax

  this->vtbl = &Sky::`vftable';
  this->nodeSkyRoot = 0;
  this->nodeMoonsRoot = 0;
  v2 = 0.0;
  unk03C = this->unk03C;
  v4 = this->unk03C;
  for ( i = 9; i >= 0; --i )
  {
    *(float *)v4 = 0.0;
    v4 += 3;
    *((float *)v4 + 0xFFFFFFFE) = 0.0;
    *((float *)v4 + 0xFFFFFFFF) = 0.0;
  }
  this->unk0B4 = 0.0;
  this->unk0B8 = 0.0;
  this->unk0BC = 0.0;
  this->atmosphere = 0;
  this->stars = 0;
  this->clouds = 0;
  this->sun = 0;
  this->masserMoon = 0;
  this->secundaMoon = 0;
  this->precipitation = 0;
  nodeSkyRoot = this->nodeSkyRoot;
  if ( nodeSkyRoot )
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeSkyRoot->members) )
      nodeSkyRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeSkyRoot, 1);
    v2 = 0.0;
    this->nodeSkyRoot = 0;
  }
  nodeMoonsRoot = this->nodeMoonsRoot;
  if ( nodeMoonsRoot )
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) )
      nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1);
    v2 = 0.0;
    this->nodeMoonsRoot = 0;
  }
  v8 = flt_A31C80;
  this->unk0DC = 4;
  this->unk0D0 = v8;
  this->firstClimate = 0;
  this->weatherOverride = 0;
  this->unk0D4 = v2;
  this->weather018 = 0;
  this->secondWeather = 0;
  this->firstWeather = 0;
  v9 = unk03C;
  v10 = 0xA;
  do
  {
    *v9 = dword_B25AC4;
    v9[1] = dword_B25AC8;
    v9[2] = dword_B25ACC;
    v9 += 3;
    --v10;
  }
  while ( v10 );
  LODWORD(this->unk0B4) = dword_B25AC4;
  LODWORD(this->unk0B8) = dword_B25AC8;
  v11 = *(float *)&dword_B25ACC;
  this->windSpeed = v2;
  this->unk0C4 = 1.0;
  this->unk0BC = v11;
  this->weatherPercent = 1.0;
  this->unk0F4 = v2;
  v12 = (_DWORD *)FormHeapAlloc(8u);
  if ( v12 )
  {
    *v12 = 0;
    v12[1] = 0;
  }
  else
  {
    v12 = 0;
  }
  this->unk0E0 = (UInt32)v12;
  this->unk0E4 = 0.0;
  this->unk0EC = 0;
  this->unk0F0 = flt_B36658;
  this->Flags0FC = 0x20;
  this->unk100 = 0;
  return this;
}
