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
  void (__thiscall ***v14)(_DWORD, int); // esi
  NiNode *v15; // esi
  unsigned int *i; // esi
  unsigned int *v17; // eax
  unsigned int v18; // ebp
  _DWORD *unk0E0; // esi
  int v20; // ebp
  NiNode *v21; // esi
  NiNode *v22; // edi
  _DWORD v23[2]; // [esp+30h] [ebp-14h] BYREF
  int v24; // [esp+40h] [ebp-4h]

  v23[1] = this;
  this->vtbl = &Sky::`vftable';
  atmosphere = this->atmosphere;
  v24 = 1;
  if ( atmosphere )
    ((void (__thiscall *)(Atmosphere *, int))atmosphere->__vftbl->GetObjectNode)(atmosphere, 1);
  stars = this->stars;
  if ( stars )
    (**(void (__thiscall ***)(Stars *, int))stars)(stars, 1);
  clouds = this->clouds;
  if ( clouds )
    ((void (__thiscall *)(Clouds *, int))clouds->__vftbl->GetObjectNode)(clouds, 1);
  sun = this->sun;
  if ( sun )
    ((void (__thiscall *)(Sun *, int))sun->vtbl->GetObjectNode)(sun, 1);
  masserMoon = this->masserMoon;
  if ( masserMoon )
    (**(void (__thiscall ***)(Moon *, int))masserMoon)(masserMoon, 1);
  secundaMoon = this->secundaMoon;
  if ( secundaMoon )
    (**(void (__thiscall ***)(Moon *, int))secundaMoon)(secundaMoon, 1);
  precipitation = this->precipitation;
  if ( precipitation )
    (**(void (__thiscall ***)(Precipitation *, int))precipitation)(precipitation, 1);
  nodeMoonsRoot = this->nodeMoonsRoot;
  if ( nodeMoonsRoot )
  {
    if ( !InterlockedDecrement((volatile LONG *)&nodeMoonsRoot->members) )
      nodeMoonsRoot->vtbl->super.super.super.Destructor((NiRefObject *)nodeMoonsRoot, 1);
    this->nodeMoonsRoot = 0;
  }
  nodeSkyRoot = this->nodeSkyRoot;
  if ( nodeSkyRoot )
  {
    if ( nodeSkyRoot->members.super.m_parent )
    {
      nodeSkyRoot->members.super.m_parent->vtbl->RemoveObject(
        nodeSkyRoot->members.super.m_parent,
        (NiAVObject **)v23,
        (NiAVObject *)this->nodeSkyRoot);
      if ( v23[0] )
      {
        v14 = (void (__thiscall ***)(_DWORD, int))v23[0];
        if ( !InterlockedDecrement((volatile LONG *)(v23[0] + 4)) )
          (**v14)(v14, 1);
      }
    }
  }
  v15 = this->nodeSkyRoot;
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v15->members) )
      v15->vtbl->super.super.super.Destructor((NiRefObject *)v15, 1);
    this->nodeSkyRoot = 0;
  }
  for ( i = (unsigned int *)this->unk0E0; i; i = (unsigned int *)i[1] )
  {
    v17 = (unsigned int *)*i;
    if ( !*i )
      break;
    v18 = *v17;
    if ( *v17 )
    {
      sub_6B73E0((_DWORD *)*v17);
      FormHeapFree(v18);
    }
    FormHeapFree(*i);
  }
  unk0E0 = (_DWORD *)this->unk0E0;
  if ( unk0E0[1] )
  {
    do
    {
      v20 = *(_DWORD *)(unk0E0[1] + 4);
      FormHeapFree(unk0E0[1]);
      unk0E0[1] = v20;
    }
    while ( v20 );
  }
  *unk0E0 = 0;
  FormHeapFree(this->unk0E0);
  v21 = this->nodeMoonsRoot;
  LOBYTE(v24) = 0;
  if ( v21 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v21->members) )
      v21->vtbl->super.super.super.Destructor((NiRefObject *)v21, 1);
  }
  v22 = this->nodeSkyRoot;
  v24 = 0xFFFFFFFF;
  if ( v22 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v22->members) )
      v22->vtbl->super.super.super.Destructor((NiRefObject *)v22, 1);
  }
}
