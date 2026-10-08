void __thiscall Sky::~Sky(Sky *this)
{
  Atmosphere *atmosphere; // ecx
  Stars *stars; // ecx
  Clouds *clouds; // ecx
  Sun *sun; // ecx
  Moon *masserMoon; // ecx
  Moon *secundaMoon; // ecx
  Precipitation *precipitation; // ecx
  NiNode *nodeMoonsRoot; // esi
  NiNode *nodeSkyRoot; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  NiNode *v12; // esi
  unsigned int *i; // esi
  unsigned int *v14; // eax
  unsigned int v15; // ebp
  _DWORD *unk0E0; // esi
  int v17; // ebp
  NiNode *v18; // esi
  NiNode *v19; // edi
  _DWORD v20[2]; // [esp+30h] [ebp-14h] BYREF
  int v21; // [esp+40h] [ebp-4h]

  v20[1] = this; /*0x53fd98*/
  this->vtbl = &Sky::`vftable'; /*0x53fd9c*/
  atmosphere = this->atmosphere; /*0x53fda2*/
  v21 = 1; /*0x53fda7*/
  if ( atmosphere ) /*0x53fdaf*/
    ((void (__thiscall *)(Atmosphere *, int))atmosphere->__vftbl->GetObjectNode)(atmosphere, 1); /*0x53fdb7*/
  stars = this->stars; /*0x53fdb9*/
  if ( stars ) /*0x53fdbe*/
    (**(void (__thiscall ***)(Stars *, int))stars)(stars, 1); /*0x53fdc6*/
  clouds = this->clouds; /*0x53fdc8*/
  if ( clouds ) /*0x53fdcd*/
    ((void (__thiscall *)(Clouds *, int))clouds->__vftbl->GetObjectNode)(clouds, 1); /*0x53fdd5*/
  sun = this->sun; /*0x53fdd7*/
  if ( sun ) /*0x53fddc*/
    ((void (__thiscall *)(Sun *, int))sun->vtbl->GetObjectNode)(sun, 1); /*0x53fde4*/
  masserMoon = this->masserMoon; /*0x53fde6*/
  if ( masserMoon ) /*0x53fdeb*/
    (**(void (__thiscall ***)(Moon *, int))masserMoon)(masserMoon, 1); /*0x53fdf3*/
  secundaMoon = this->secundaMoon; /*0x53fdf5*/
  if ( secundaMoon ) /*0x53fdfa*/
    (**(void (__thiscall ***)(Moon *, int))secundaMoon)(secundaMoon, 1); /*0x53fe02*/
  precipitation = this->precipitation; /*0x53fe04*/
  if ( precipitation ) /*0x53fe09*/
    (**(void (__thiscall ***)(Precipitation *, int))precipitation)(precipitation, 1); /*0x53fe11*/
  nodeMoonsRoot = this->nodeMoonsRoot; /*0x53fe13*/
  if ( nodeMoonsRoot ) /*0x53fe18*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) ) /*0x53fe1e*/
      nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1); /*0x53fe34*/
    this->nodeMoonsRoot = 0; /*0x53fe36*/
  }
  nodeSkyRoot = this->nodeSkyRoot; /*0x53fe3d*/
  if ( nodeSkyRoot ) /*0x53fe42*/
  {
    if ( nodeSkyRoot->members.super.m_parent ) /*0x53fe44*/
    {
      nodeSkyRoot->members.super.m_parent->vtbl->RemoveObject( /*0x53fe5b*/
        nodeSkyRoot->members.super.m_parent,
        (NiAVObject **)v20,
        (NiAVObject *)this->nodeSkyRoot);
      if ( v20[0] ) /*0x53fe63*/
      {
        v11 = (void (__thiscall ***)(_DWORD, int))v20[0]; /*0x53fe65*/
        if ( !InterlockedDecrement((volatile LONG *)(v20[0] + 4)) ) /*0x53fe6b*/
          (**v11)(v11, 1); /*0x53fe81*/
      }
    }
  }
  v12 = this->nodeSkyRoot; /*0x53fe83*/
  if ( v12 ) /*0x53fe88*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v12->members) ) /*0x53fe8e*/
      v12->vtbl->super.super.super.Destructor((NiRefObject *)v12, 1); /*0x53fea4*/
    this->nodeSkyRoot = 0; /*0x53fea6*/
  }
  for ( i = (unsigned int *)this->unk0E0; i; i = (unsigned int *)i[1] ) /*0x53feb5*/
  {
    v14 = (unsigned int *)*i; /*0x53feb7*/
    if ( !*i ) /*0x53feb7*/
      break; /*0x53febb*/
    v15 = *v14; /*0x53febd*/
    if ( *v14 ) /*0x53febd*/
    {
      sub_6B73E0((_DWORD *)*v14); /*0x53fec5*/
      FormHeapFree(v15); /*0x53fecb*/
    }
    FormHeapFree(*i); /*0x53fed6*/
  }
  unk0E0 = (_DWORD *)this->unk0E0; /*0x53fee5*/
  if ( unk0E0[1] ) /*0x53feeb*/
  {
    do /*0x53ff05*/
    {
      v17 = *(_DWORD *)(unk0E0[1] + 4); /*0x53fef4*/
      FormHeapFree(unk0E0[1]); /*0x53fef8*/
      unk0E0[1] = v17; /*0x53ff02*/
    }
    while ( v17 ); /*0x53ff05*/
  }
  *unk0E0 = 0; /*0x53ff07*/
  FormHeapFree(this->unk0E0); /*0x53ff14*/
  v18 = this->nodeMoonsRoot; /*0x53ff19*/
  LOBYTE(v21) = 0; /*0x53ff21*/
  if ( v18 ) /*0x53ff26*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x53ff2c*/
      v18->vtbl->super.super.super.Destructor((NiRefObject *)v18, 1); /*0x53ff42*/
  }
  v19 = this->nodeSkyRoot; /*0x53ff44*/
  v21 = 0xFFFFFFFF; /*0x53ff49*/
  if ( v19 ) /*0x53ff51*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v19->members) ) /*0x53ff57*/
      v19->vtbl->super.super.super.Destructor((NiRefObject *)v19, 1); /*0x53ff6d*/
  }
}
