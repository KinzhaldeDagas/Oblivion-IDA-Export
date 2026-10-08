void __thiscall Moon::~Moon(SkyObject *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  NiNode *rootNode; // eax
  void (__thiscall ***v8)(_DWORD, int); // edi
  NiNode *v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  _DWORD v14[2]; // [esp+28h] [ebp-14h] BYREF
  int v15; // [esp+38h] [ebp-4h]

  v14[1] = this; /*0x53c659*/
  this->vtbl = (SkyObjectVtbl *)&Moon::`vftable'; /*0x53c65d*/
  v2 = *((_DWORD *)this + 5); /*0x53c663*/
  v3 = InterlockedDecrement; /*0x53c666*/
  v15 = 5; /*0x53c670*/
  if ( v2 ) /*0x53c678*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x53c67e*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x53c690*/
    *((_DWORD *)this + 5) = 0; /*0x53c692*/
  }
  v4 = *((_DWORD *)this + 4); /*0x53c695*/
  if ( v4 ) /*0x53c69a*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x53c6a0*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x53c6b2*/
    *((_DWORD *)this + 4) = 0; /*0x53c6b4*/
  }
  v5 = *((_DWORD *)this + 3); /*0x53c6b7*/
  if ( v5 ) /*0x53c6bc*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x53c6c2*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x53c6d4*/
    *((_DWORD *)this + 3) = 0; /*0x53c6d6*/
  }
  v6 = *((_DWORD *)this + 2); /*0x53c6d9*/
  if ( v6 ) /*0x53c6de*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x53c6e4*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x53c6f6*/
    *((_DWORD *)this + 2) = 0; /*0x53c6f8*/
  }
  rootNode = this->members.rootNode; /*0x53c6fb*/
  if ( rootNode->members.super.m_parent ) /*0x53c6fe*/
  {
    rootNode->members.super.m_parent->vtbl->RemoveObject( /*0x53c714*/
      rootNode->members.super.m_parent,
      (NiAVObject **)v14,
      (NiAVObject *)this->members.rootNode);
    if ( v14[0] ) /*0x53c71c*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v14[0]; /*0x53c71e*/
      if ( !v3((volatile LONG *)(v14[0] + 4)) ) /*0x53c724*/
        (**v8)(v8, 1); /*0x53c736*/
    }
  }
  v9 = this->members.rootNode; /*0x53c738*/
  if ( v9 ) /*0x53c73d*/
  {
    if ( !v3((volatile LONG *)&v9->members) ) /*0x53c743*/
      v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x53c755*/
    this->members.rootNode = 0; /*0x53c757*/
  }
  LOBYTE(v15) = 4; /*0x53c767*/
  _LN21((char *)this + 0x18, 8u, 8, (void (__thiscall *)(void *))BSStringT_Clear); /*0x53c76c*/
  v10 = *((_DWORD *)this + 5); /*0x53c771*/
  LOBYTE(v15) = 3; /*0x53c776*/
  if ( v10 ) /*0x53c77b*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x53c781*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x53c793*/
  }
  v11 = *((_DWORD *)this + 4); /*0x53c795*/
  LOBYTE(v15) = 2; /*0x53c79a*/
  if ( v11 ) /*0x53c79f*/
  {
    if ( !v3((volatile LONG *)(v11 + 4)) ) /*0x53c7a5*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x53c7b7*/
  }
  v12 = *((_DWORD *)this + 3); /*0x53c7b9*/
  LOBYTE(v15) = 1; /*0x53c7be*/
  if ( v12 ) /*0x53c7c3*/
  {
    if ( !v3((volatile LONG *)(v12 + 4)) ) /*0x53c7c9*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x53c7db*/
  }
  v13 = *((_DWORD *)this + 2); /*0x53c7dd*/
  LOBYTE(v15) = 0; /*0x53c7e2*/
  if ( v13 ) /*0x53c7e6*/
  {
    if ( !v3((volatile LONG *)(v13 + 4)) ) /*0x53c7ec*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x53c7fe*/
  }
  v15 = 0xFFFFFFFF; /*0x53c802*/
  SkyObject::~SkyObject(this); /*0x53c80a*/
}
