void __cdecl sub_70C0B0(NiCamera *a1, SceneGraph *a2, NiCullingProcess *a3, _DWORD *a4)
{
  _DWORD *VisibleGeo; // esi

  if ( g_Renderer )
  {
    if ( a1 )
    {
      if ( a2 )
      {
        VisibleGeo = a4;
        if ( !a4 )
          VisibleGeo = a3->VisibleGeo;
        SetCameraViewProj(g_Renderer, a1);
        if ( VisibleGeo )
        {
          VisibleGeo[1] = 0;
          ((void (__thiscall *)(NiCullingProcess *, NiCamera *, SceneGraph *, _DWORD *))a3->vtbl->Process)(
            a3,
            a1,
            a2,
            VisibleGeo);
          sub_70C000(a1, VisibleGeo);
        }
        else
        {
          ((void (__thiscall *)(NiCullingProcess *, NiCamera *, SceneGraph *, _DWORD))a3->vtbl->Process)(a3, a1, a2, 0);
        }
      }
    }
  }
}
