0x7D7150: mov     eax, ds:0B45D74h; Drain and release every render-target stack entry, then end the active group. This path does not rebind a previous/default target or restore viewport/scissor state.
0x7D7155: test    eax, eax
0x7D7157: jz      short loc_7D71A6
0x7D7159: push    ebx
0x7D715A: mov     ebx, ds:0A2807Ch
0x7D7160: push    esi
0x7D7161: push    edi
0x7D7162: sub     eax, 1
0x7D7165: mov     esi, ds:0B45D78h[eax*4]
0x7D716C: test    esi, esi
0x7D716E: lea     edi, ds:0B45D78h[eax*4]
0x7D7175: mov     ds:0B45D74h, eax
0x7D717A: jz      short loc_7D719F
0x7D717C: lea     eax, [esi+4]
0x7D717F: push    eax; lpAddend
0x7D7180: call    ebx ; InterlockedDecrement
0x7D7182: test    eax, eax
0x7D7184: jnz     short loc_7D7194
0x7D7186: test    esi, esi
0x7D7188: jz      short loc_7D7194
0x7D718A: mov     edx, [esi]
0x7D718C: mov     eax, [edx]
0x7D718E: push    1
0x7D7190: mov     ecx, esi
0x7D7192: call    eax
0x7D7194: mov     eax, ds:0B45D74h
0x7D7199: mov     dword ptr [edi], 0
0x7D719F: test    eax, eax
0x7D71A1: jnz     short loc_7D7162
0x7D71A3: pop     edi
0x7D71A4: pop     esi
0x7D71A5: pop     ebx
0x7D71A6: mov     ecx, ds:0B3F928h; this
0x7D71AC: cmp     byte ptr [ecx+20Ch], 0
0x7D71B3: jz      short locret_7D71BA
0x7D71B5: jmp     NiDX9Renderer_EndRenderTargetGroupLocked; After releasing all stack references, end the active group; no replacement target is bound here.
0x7D71BA: retn
