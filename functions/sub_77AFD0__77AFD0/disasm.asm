0x77AFD0: cmp     dword ptr [ecx+0F4h], 0; Renderer projection mirror predicate: returns whether NiDX9RenderState DWORD +F4 is nonzero. SetupCamera uses this only to flip projection X (including off-center X shift).
0x77AFD7: setnz   al
0x77AFDA: retn
