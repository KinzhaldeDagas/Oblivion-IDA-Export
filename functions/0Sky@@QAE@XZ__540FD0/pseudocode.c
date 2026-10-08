Sky *__thiscall Sky::Sky(Sky *this)
{
  double v2; // st7
  UInt32 *unk03C; // ebp
  UInt32 *v4; // eax
  int i; // ecx
  NiNode *nodeSkyRoot; // edi
  NiNode *nodeMoonsRoot; // edi
  double v8; // st6
  float *v9; // eax
  int v10; // ecx
  float z; // edx
  _DWORD *v12; // eax

  this->vtbl = &Sky::`vftable'; /*0x540ffd*/
  this->nodeSkyRoot = 0; /*0x541003*/
  this->nodeMoonsRoot = 0; /*0x54100a*/
  v2 = 0.0; /*0x54100d*/
  unk03C = this->unk03C; /*0x54100f*/
  v4 = this->unk03C; /*0x541017*/
  for ( i = 9; i >= 0; --i ) /*0x541019*/
  {
    *(float *)v4 = 0.0; /*0x54101e*/
    v4 += 3; /*0x541020*/
    *((float *)v4 + 0xFFFFFFFE) = 0.0; /*0x541026*/
    *((float *)v4 + 0xFFFFFFFF) = 0.0; /*0x541029*/
  }
  this->unk0B4 = 0.0; /*0x54102e*/
  this->unk0B8 = 0.0; /*0x541034*/
  this->unk0BC = 0.0; /*0x54103a*/
  this->atmosphere = 0; /*0x541040*/
  this->stars = 0; /*0x541043*/
  this->clouds = 0; /*0x541046*/
  this->sun = 0; /*0x541049*/
  this->masserMoon = 0; /*0x54104c*/
  this->secundaMoon = 0; /*0x54104f*/
  this->precipitation = 0; /*0x541052*/
  nodeSkyRoot = this->nodeSkyRoot; /*0x541055*/
  if ( nodeSkyRoot ) /*0x54105a*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeSkyRoot->members) ) /*0x541062*/
      nodeSkyRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeSkyRoot, 1); /*0x541078*/
    v2 = 0.0; /*0x54107a*/
    this->nodeSkyRoot = 0; /*0x54107c*/
  }
  nodeMoonsRoot = this->nodeMoonsRoot; /*0x54107f*/
  if ( nodeMoonsRoot ) /*0x541084*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) ) /*0x54108c*/
      nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1); /*0x5410a2*/
    v2 = 0.0; /*0x5410a4*/
    this->nodeMoonsRoot = 0; /*0x5410a6*/
  }
  v8 = flt_A31C80; /*0x5410a9*/
  this->unk0DC = 4; /*0x5410af*/
  this->unk0D0 = v8; /*0x5410b9*/
  this->firstClimate = 0; /*0x5410bf*/
  this->weatherOverride = 0; /*0x5410c2*/
  this->unk0D4 = v2; /*0x5410c5*/
  this->weather018 = 0; /*0x5410cb*/
  this->secondWeather = 0; /*0x5410ce*/
  this->firstWeather = 0; /*0x5410d1*/
  v9 = (float *)unk03C; /*0x5410d4*/
  v10 = 0xA; /*0x5410d6*/
  do /*0x5410fb*/
  {
    *v9 = stru_B25AC4.x; /*0x5410e1*/
    v9[1] = stru_B25AC4.y; /*0x5410e9*/
    v9[2] = stru_B25AC4.z; /*0x5410f2*/
    v9 += 3; /*0x5410f5*/
    --v10; /*0x5410f8*/
  }
  while ( v10 ); /*0x5410fb*/
  this->unk0B4 = stru_B25AC4.x; /*0x541102*/
  this->unk0B8 = stru_B25AC4.y; /*0x54110e*/
  z = stru_B25AC4.z; /*0x541114*/
  this->windSpeed = v2; /*0x54111a*/
  this->unk0C4 = 1.0; /*0x541124*/
  this->unk0BC = z; /*0x54112a*/
  this->weatherPercent = 1.0; /*0x541130*/
  this->unk0F4 = v2; /*0x541136*/
  v12 = (_DWORD *)FormHeapAlloc(8u); /*0x54113c*/
  if ( v12 ) /*0x541146*/
  {
    *v12 = 0; /*0x541148*/
    v12[1] = 0; /*0x54114a*/
  }
  else
  {
    v12 = 0; /*0x54114f*/
  }
  this->unk0E0 = (UInt32)v12; /*0x541153*/
  this->unk0E4 = 0.0; /*0x541159*/
  this->unk0EC = 0; /*0x54115f*/
  this->unk0F0 = unk_B36658; /*0x54116d*/
  this->Flags0FC = 0x20; /*0x541173*/
  this->unk100 = 0; /*0x54117d*/
  return this; /*0x541183*/
}
