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

  v14[1] = this;
  this->vtbl = (SkyObjectVtbl *)&Moon::`vftable';
  v2 = *((_DWORD *)this + 5);
  v3 = InterlockedDecrement;
  v15 = 5;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 5) = 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 4) = 0;
  }
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 3) = 0;
  }
  v6 = *((_DWORD *)this + 2);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *((_DWORD *)this + 2) = 0;
  }
  rootNode = this->members.rootNode;
  if ( rootNode->members.super.m_parent )
  {
    rootNode->members.super.m_parent->vtbl->RemoveObject(
      rootNode->members.super.m_parent,
      (NiAVObject **)v14,
      (NiAVObject *)this->members.rootNode);
    if ( v14[0] )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v14[0];
      if ( !v3((volatile LONG *)(v14[0] + 4)) )
        (**v8)(v8, 1);
    }
  }
  v9 = this->members.rootNode;
  if ( v9 )
  {
    if ( !v3((volatile LONG *)&v9->members) )
      v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1);
    this->members.rootNode = 0;
  }
  LOBYTE(v15) = 4;
  _LN21(this + 3, 8u, 8, (void (__thiscall *)(void *))BSStringT_Clear);
  v10 = *((_DWORD *)this + 5);
  LOBYTE(v15) = 3;
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *((_DWORD *)this + 4);
  LOBYTE(v15) = 2;
  if ( v11 )
  {
    if ( !v3((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = *((_DWORD *)this + 3);
  LOBYTE(v15) = 1;
  if ( v12 )
  {
    if ( !v3((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  v13 = *((_DWORD *)this + 2);
  LOBYTE(v15) = 0;
  if ( v13 )
  {
    if ( !v3((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
  v15 = 0xFFFFFFFF;
  SkyObject::~SkyObject(this);
}
