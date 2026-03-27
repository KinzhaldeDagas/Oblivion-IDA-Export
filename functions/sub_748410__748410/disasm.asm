0x748410: mov     eax, [ecx]
0x748412: push    esi; ArgList
0x748413: lea     eax, [eax+eax*2]
0x748416: cmp     byte ptr ds:0B40618h[eax*4], 0
0x74841E: push    edi; Format
0x74841F: mov     edi, offset DstBuf
0x748424: mov     esi, 200h
0x748429: jz      short loc_748463
0x74842B: call    sub_7485F0
0x748430: sub     esp, 8
0x748433: fstp    qword ptr [esp+10h+var_10]; ArgList
0x748436: push    offset aWhatAFuck; "%f: "
0x74843B: push    esi; SizeInBytes
0x74843C: push    edi; DstBuf
0x74843D: call    sub_6C5D40
0x748442: mov     eax, edi
0x748444: add     esp, 14h
0x748447: lea     edx, [eax+1]
0x74844A: lea     ebx, [ebx+0]
0x748450: mov     cl, [eax]
0x748452: add     eax, 1
0x748455: test    cl, cl
0x748457: jnz     short loc_748450
0x748459: sub     eax, edx
0x74845B: sub     esi, eax
0x74845D: lea     edi, DstBuf[eax]
0x748463: mov     ecx, [esp+8+ArgList]
0x748467: mov     edx, [esp+8+Format]
0x74846B: push    ecx; ArgList
0x74846C: push    edx; MaxCount
0x74846D: push    esi; MaxCount
0x74846E: push    esi; SizeInBytes
0x74846F: push    edi; DstBuf
0x748470: call    __vsnprintf_s
0x748475: add     esp, 14h
0x748478: mov     byte ptr [esi+edi-1], 0
0x74847D: pop     edi
0x74847E: pop     esi
0x74847F: retn    8
