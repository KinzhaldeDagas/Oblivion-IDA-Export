void __thiscall sub_49CFB0(int *this)
{
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  NiNode *v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // edi

  WaterManager::Destroy_((WaterManager *)this, (int *)1);
  v5 = InterlockedDecrement;
  if ( LodWaterRoot )
  {
    v6 = LodWaterRoot;
    if ( !v5((volatile LONG *)&LodWaterRoot->members) )
    {
      if ( v6 )
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1);
    }
    LodWaterRoot = 0;
  }
  v7 = this[0x12];
  if ( v7 )
  {
    if ( !v5((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  NiTPointerList<WadingWaterData *>::~NiTPointerList<WadingWaterData *>((NiTPointerList__BSImageSpaceShader *)(this + 0xC));
  v8 = this[5];
  if ( v8 )
  {
    if ( !v5((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = this[4];
  if ( v9 )
  {
    if ( !v5((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = this[3];
  if ( v10 )
  {
    if ( !v5((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = this[2];
  if ( v11 )
  {
    if ( !v5((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = this[1];
  if ( v12 )
  {
    if ( !v5((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  v13 = *this;
  if ( v13 )
  {
    if ( !v5((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
  }
}
