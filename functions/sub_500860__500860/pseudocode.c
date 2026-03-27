char sub_500860()
{
  bool v0; // al
  bool v1; // zf
  const char *v2; // eax

  v0 = OcclusionCullngBool == 0;
  OcclusionCullngBool = v0;
  v1 = !v0;
  v2 = "on";
  if ( v1 )
    v2 = aOff_0;
  Interface_ConsolePrint("Occlusion Query : %s", v2);
  return 1;
}
