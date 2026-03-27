0x46C700: mov     eax, [ecx+0Ch]
0x46C703: push    eax
0x46C704: movzx   eax, byte ptr [ecx+4]
0x46C708: lea     ecx, [eax+eax*2]
0x46C70B: mov     edx, ds:0B05E04h[ecx*4]
0x46C712: mov     eax, [esp+4+arg_0]
0x46C716: push    offset EmptyString
0x46C71B: push    edx; ArgList
0x46C71C: push    offset aSFormS08x; "%s Form '%s' (%08X)"
0x46C721: push    eax; int
0x46C722: call    BSStringT_Static_Format
0x46C727: add     esp, 14h
0x46C72A: retn    4
