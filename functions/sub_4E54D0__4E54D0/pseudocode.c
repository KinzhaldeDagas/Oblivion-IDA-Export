NiAVObject *__thiscall sub_4E54D0(_DWORD *this)
{
  NiAVObject *result; // eax
  void (__thiscall ***v2)(_DWORD, int); // esi
  _DWORD *v3; // [esp+14h] [ebp-4h] BYREF

  v3 = this; /*0x4e54d0*/
  result = (NiAVObject *)*(this + 7); /*0x4e54d1*/
  if ( result ) /*0x4e54d6*/
  {
    if ( g_PathGridDebugRenderRoot ) /*0x4e54d8*/
    {
      g_PathGridDebugRenderRoot->vtbl->RemoveObject(g_PathGridDebugRenderRoot, (NiAVObject **)&v3, result); /*0x4e54f0*/
      if ( v3 ) /*0x4e54f7*/
      {
        v2 = (void (__thiscall ***)(_DWORD, int))v3; /*0x4e54fa*/
        if ( !InterlockedDecrement(v3 + 1) ) /*0x4e5500*/
          (**v2)(v2, 1); /*0x4e5516*/
      }
      NiAVObject_InitializePropertyState((NiAVObject *)g_PathGridDebugRenderRoot); /*0x4e551f*/
      NiNode_UpdateDynamicEffectState(g_PathGridDebugRenderRoot); /*0x4e552a*/
      return (NiAVObject *)NiAVObject_UpdateNiAVObject((NiAVObject *)g_PathGridDebugRenderRoot, 0.0, 0); /*0x4e553d*/
    }
  }
  return result; /*0x4e5543*/
}
