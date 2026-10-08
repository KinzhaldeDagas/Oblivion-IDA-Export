0x855E80: push    0FFFFFFFFh
0x855E82: push    offset SEH_855E80
0x855E87: mov     eax, large fs:0
0x855E8D: push    eax
0x855E8E: push    esi
0x855E8F: mov     eax, ds:0B30AACh
0x855E94: xor     eax, esp
0x855E96: push    eax
0x855E97: lea     eax, [esp+14h+var_C]
0x855E9B: mov     large fs:0, eax
0x855EA1: mov     esi, ecx
0x855EA3: cmp     [esp+14h+arg_18], 0
0x855EA8: jnz     loc_856224
0x855EAE: cmp     [esp+14h+arg_1C], 0
0x855EB3: jnz     loc_856168
0x855EB9: cmp     [esp+14h+arg_20], 0
0x855EBE: jnz     loc_8560B7
0x855EC4: cmp     [esp+14h+arg_2C], 0
0x855EC9: jnz     loc_856018
0x855ECF: cmp     [esp+14h+arg_28], 0
0x855ED4: jnz     loc_855F79
0x855EDA: cmp     [esp+14h+arg_30], 0
0x855EDF: jnz     short loc_855F2D
0x855EE1: cmp     byte ptr [esp+14h+arg_10], 1
0x855EE6: jnz     loc_8564C8
0x855EEC: push    10h; Size
0x855EEE: call    FormHeapAlloc
0x855EF3: add     esp, 4
0x855EF6: mov     [esp+14h+arg_10], eax
0x855EFA: test    eax, eax
0x855EFC: mov     [esp+14h+var_4], 0
0x855F04: jz      loc_856148
0x855F0A: mov     ecx, [esp+14h+arg_8]
0x855F0E: mov     edx, [esp+14h+arg_4]
0x855F12: push    ecx
0x855F13: mov     ecx, [esp+18h+vtable]
0x855F17: push    edx
0x855F18: push    2; lightCount
0x855F1A: push    1; byte6
0x855F1C: push    4Ah ; 'J'; selector
0x855F1E: push    ecx; geometry
0x855F1F: push    eax; outPass
0x855F20: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x855F25: add     esp, 1Ch
0x855F28: jmp     loc_85614A
0x855F2D: cmp     byte ptr [esp+14h+arg_10], 1
0x855F32: jnz     loc_8564C8
0x855F38: push    10h; Size
0x855F3A: call    FormHeapAlloc
0x855F3F: add     esp, 4
0x855F42: mov     [esp+14h+arg_10], eax
0x855F46: test    eax, eax
0x855F48: mov     [esp+14h+var_4], 1
0x855F50: jz      loc_856148
0x855F56: mov     ecx, [esp+14h+arg_8]
0x855F5A: mov     edx, [esp+14h+arg_4]
0x855F5E: push    ecx
0x855F5F: mov     ecx, [esp+18h+vtable]
0x855F63: push    edx
0x855F64: push    2; lightCount
0x855F66: push    1; byte6
0x855F68: push    54h ; 'T'; selector
0x855F6A: push    ecx; geometry
0x855F6B: push    eax; outPass
0x855F6C: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x855F71: add     esp, 1Ch
0x855F74: jmp     loc_85614A
0x855F79: cmp     [esp+14h+arg_30], 0
0x855F7E: jnz     short loc_855FCC
0x855F80: cmp     byte ptr [esp+14h+arg_10], 1
0x855F85: jnz     loc_8564C8
0x855F8B: push    10h; Size
0x855F8D: call    FormHeapAlloc
0x855F92: add     esp, 4
0x855F95: mov     [esp+14h+arg_10], eax
0x855F99: test    eax, eax
0x855F9B: mov     [esp+14h+var_4], 2
0x855FA3: jz      loc_856148
0x855FA9: mov     ecx, [esp+14h+arg_8]
0x855FAD: mov     edx, [esp+14h+arg_4]
0x855FB1: push    ecx
0x855FB2: mov     ecx, [esp+18h+vtable]
0x855FB6: push    edx
0x855FB7: push    2; lightCount
0x855FB9: push    1; byte6
0x855FBB: push    55h ; 'U'; selector
0x855FBD: push    ecx; geometry
0x855FBE: push    eax; outPass
0x855FBF: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x855FC4: add     esp, 1Ch
0x855FC7: jmp     loc_85614A
0x855FCC: cmp     byte ptr [esp+14h+arg_10], 1
0x855FD1: jnz     loc_8564C8
0x855FD7: push    10h; Size
0x855FD9: call    FormHeapAlloc
0x855FDE: add     esp, 4
0x855FE1: mov     [esp+14h+arg_10], eax
0x855FE5: test    eax, eax
0x855FE7: mov     [esp+14h+var_4], 3
0x855FEF: jz      loc_856148
0x855FF5: mov     ecx, [esp+14h+arg_8]
0x855FF9: mov     edx, [esp+14h+arg_4]
0x855FFD: push    ecx
0x855FFE: mov     ecx, [esp+18h+vtable]
0x856002: push    edx
0x856003: push    2; lightCount
0x856005: push    1; byte6
0x856007: push    5Fh ; '_'; selector
0x856009: push    ecx; geometry
0x85600A: push    eax; outPass
0x85600B: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856010: add     esp, 1Ch
0x856013: jmp     loc_85614A
0x856018: cmp     [esp+14h+arg_28], 0
0x85601D: jnz     short loc_85606B
0x85601F: cmp     byte ptr [esp+14h+arg_10], 1
0x856024: jnz     loc_8564C8
0x85602A: push    10h; Size
0x85602C: call    FormHeapAlloc
0x856031: add     esp, 4
0x856034: mov     [esp+14h+arg_10], eax
0x856038: test    eax, eax
0x85603A: mov     [esp+14h+var_4], 4
0x856042: jz      loc_856148
0x856048: mov     ecx, [esp+14h+arg_8]
0x85604C: mov     edx, [esp+14h+arg_4]
0x856050: push    ecx
0x856051: mov     ecx, [esp+18h+vtable]
0x856055: push    edx
0x856056: push    2; lightCount
0x856058: push    1; byte6
0x85605A: push    4Ch ; 'L'; selector
0x85605C: push    ecx; geometry
0x85605D: push    eax; outPass
0x85605E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856063: add     esp, 1Ch
0x856066: jmp     loc_85614A
0x85606B: cmp     byte ptr [esp+14h+arg_10], 1
0x856070: jnz     loc_8564C8
0x856076: push    10h; Size
0x856078: call    FormHeapAlloc
0x85607D: add     esp, 4
0x856080: mov     [esp+14h+arg_10], eax
0x856084: test    eax, eax
0x856086: mov     [esp+14h+var_4], 5
0x85608E: jz      loc_856148
0x856094: mov     ecx, [esp+14h+arg_8]
0x856098: mov     edx, [esp+14h+arg_4]
0x85609C: push    ecx
0x85609D: mov     ecx, [esp+18h+vtable]
0x8560A1: push    edx
0x8560A2: push    2; lightCount
0x8560A4: push    1; byte6
0x8560A6: push    57h ; 'W'; selector
0x8560A8: push    ecx; geometry
0x8560A9: push    eax; outPass
0x8560AA: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8560AF: add     esp, 1Ch
0x8560B2: jmp     loc_85614A
0x8560B7: cmp     [esp+14h+arg_28], 0
0x8560BC: jnz     short loc_856103
0x8560BE: cmp     byte ptr [esp+14h+arg_10], 1
0x8560C3: jnz     loc_8564C8
0x8560C9: push    10h; Size
0x8560CB: call    FormHeapAlloc
0x8560D0: add     esp, 4
0x8560D3: mov     [esp+14h+arg_10], eax
0x8560D7: test    eax, eax
0x8560D9: mov     [esp+14h+var_4], 6
0x8560E1: jz      short loc_856148
0x8560E3: mov     ecx, [esp+14h+arg_8]
0x8560E7: mov     edx, [esp+14h+arg_4]
0x8560EB: push    ecx
0x8560EC: mov     ecx, [esp+18h+vtable]
0x8560F0: push    edx
0x8560F1: push    2; lightCount
0x8560F3: push    1; byte6
0x8560F5: push    4Eh ; 'N'; selector
0x8560F7: push    ecx; geometry
0x8560F8: push    eax; outPass
0x8560F9: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8560FE: add     esp, 1Ch
0x856101: jmp     short loc_85614A
0x856103: cmp     byte ptr [esp+14h+arg_10], 1
0x856108: jnz     loc_8564C8
0x85610E: push    10h; Size
0x856110: call    FormHeapAlloc
0x856115: add     esp, 4
0x856118: mov     [esp+14h+arg_10], eax
0x85611C: test    eax, eax
0x85611E: mov     [esp+14h+var_4], 7
0x856126: jz      short loc_856148
0x856128: mov     ecx, [esp+14h+arg_8]
0x85612C: mov     edx, [esp+14h+arg_4]
0x856130: push    ecx
0x856131: mov     ecx, [esp+18h+vtable]
0x856135: push    edx
0x856136: push    2; lightCount
0x856138: push    1; byte6
0x85613A: push    59h ; 'Y'; selector
0x85613C: push    ecx; geometry
0x85613D: push    eax; outPass
0x85613E: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856143: add     esp, 1Ch
0x856146: jmp     short loc_85614A
0x856148: xor     eax, eax
0x85614A: lea     edx, [esp+14h+arg_10]
0x85614E: push    edx
0x85614F: lea     ecx, [esi+28h]
0x856152: mov     [esp+18h+var_4], 0FFFFFFFFh
0x85615A: mov     [esp+18h+arg_10], eax
0x85615E: call    NiTPointerList__AddTail; Generic NiTPointerList tail insertion: allocates a node through the list's allocator vfunc, links it after end, updates start/end, and increments numItems.
0x856163: jmp     loc_8564E7
0x856168: cmp     [esp+14h+arg_20], 0
0x85616D: jnz     loc_85620B
0x856173: cmp     [esp+14h+arg_28], 0
0x856178: jnz     short loc_8561BF
0x85617A: cmp     byte ptr [esp+14h+arg_10], 1
0x85617F: jnz     loc_8564C8
0x856185: push    10h; Size
0x856187: call    FormHeapAlloc
0x85618C: add     esp, 4
0x85618F: mov     [esp+14h+arg_10], eax
0x856193: test    eax, eax
0x856195: mov     [esp+14h+var_4], 8
0x85619D: jz      short loc_856148
0x85619F: mov     ecx, [esp+14h+arg_8]
0x8561A3: mov     edx, [esp+14h+arg_4]
0x8561A7: push    ecx
0x8561A8: mov     ecx, [esp+18h+vtable]
0x8561AC: push    edx
0x8561AD: push    2; lightCount
0x8561AF: push    1; byte6
0x8561B1: push    4Bh ; 'K'; selector
0x8561B3: push    ecx; geometry
0x8561B4: push    eax; outPass
0x8561B5: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8561BA: add     esp, 1Ch
0x8561BD: jmp     short loc_85614A
0x8561BF: cmp     byte ptr [esp+14h+arg_10], 1
0x8561C4: jnz     loc_8564C8
0x8561CA: push    10h; Size
0x8561CC: call    FormHeapAlloc
0x8561D1: add     esp, 4
0x8561D4: mov     [esp+14h+arg_10], eax
0x8561D8: test    eax, eax
0x8561DA: mov     [esp+14h+var_4], 9
0x8561E2: jz      loc_856148
0x8561E8: mov     ecx, [esp+14h+arg_8]
0x8561EC: mov     edx, [esp+14h+arg_4]
0x8561F0: push    ecx
0x8561F1: mov     ecx, [esp+18h+vtable]
0x8561F5: push    edx
0x8561F6: push    2; lightCount
0x8561F8: push    1; byte6
0x8561FA: push    56h ; 'V'; selector
0x8561FC: push    ecx; geometry
0x8561FD: push    eax; outPass
0x8561FE: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856203: add     esp, 1Ch
0x856206: jmp     loc_85614A
0x85620B: mov     eax, ds:0B42E8Ch
0x856210: test    eax, eax
0x856212: jz      loc_8564E7
0x856218: push    0
0x85621A: push    offset aShaderError_21; "SHADER ERROR : no shader to handle BSSM"...
0x85621F: jmp     loc_8564E2
0x856224: cmp     [esp+14h+arg_1C], 0
0x856229: jnz     loc_856422
0x85622F: cmp     [esp+14h+arg_20], 0
0x856234: jnz     loc_856383
0x85623A: cmp     [esp+14h+arg_2C], 0
0x85623F: jnz     loc_8562E4
0x856245: cmp     [esp+14h+arg_28], 0
0x85624A: jnz     short loc_856298
0x85624C: cmp     byte ptr [esp+14h+arg_10], 1
0x856251: jnz     loc_8564C8
0x856257: push    10h; Size
0x856259: call    FormHeapAlloc
0x85625E: add     esp, 4
0x856261: mov     [esp+14h+arg_10], eax
0x856265: test    eax, eax
0x856267: mov     [esp+14h+var_4], 0Ah
0x85626F: jz      loc_856148
0x856275: mov     ecx, [esp+14h+arg_8]
0x856279: mov     edx, [esp+14h+arg_4]
0x85627D: push    ecx
0x85627E: mov     ecx, [esp+18h+vtable]
0x856282: push    edx
0x856283: push    2; lightCount
0x856285: push    1; byte6
0x856287: push    4Fh ; 'O'; selector
0x856289: push    ecx; geometry
0x85628A: push    eax; outPass
0x85628B: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856290: add     esp, 1Ch
0x856293: jmp     loc_85614A
0x856298: cmp     byte ptr [esp+14h+arg_10], 1
0x85629D: jnz     loc_8564C8
0x8562A3: push    10h; Size
0x8562A5: call    FormHeapAlloc
0x8562AA: add     esp, 4
0x8562AD: mov     [esp+14h+arg_10], eax
0x8562B1: test    eax, eax
0x8562B3: mov     [esp+14h+var_4], 0Bh
0x8562BB: jz      loc_856148
0x8562C1: mov     ecx, [esp+14h+arg_8]
0x8562C5: mov     edx, [esp+14h+arg_4]
0x8562C9: push    ecx
0x8562CA: mov     ecx, [esp+18h+vtable]
0x8562CE: push    edx
0x8562CF: push    2; lightCount
0x8562D1: push    1; byte6
0x8562D3: push    5Ah ; 'Z'; selector
0x8562D5: push    ecx; geometry
0x8562D6: push    eax; outPass
0x8562D7: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8562DC: add     esp, 1Ch
0x8562DF: jmp     loc_85614A
0x8562E4: cmp     [esp+14h+arg_28], 0
0x8562E9: jnz     short loc_856337
0x8562EB: cmp     byte ptr [esp+14h+arg_10], 1
0x8562F0: jnz     loc_8564C8
0x8562F6: push    10h; Size
0x8562F8: call    FormHeapAlloc
0x8562FD: add     esp, 4
0x856300: mov     [esp+14h+arg_10], eax
0x856304: test    eax, eax
0x856306: mov     [esp+14h+var_4], 0Ch
0x85630E: jz      loc_856148
0x856314: mov     ecx, [esp+14h+arg_8]
0x856318: mov     edx, [esp+14h+arg_4]
0x85631C: push    ecx
0x85631D: mov     ecx, [esp+18h+vtable]
0x856321: push    edx
0x856322: push    2; lightCount
0x856324: push    1; byte6
0x856326: push    50h ; 'P'; selector
0x856328: push    ecx; geometry
0x856329: push    eax; outPass
0x85632A: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85632F: add     esp, 1Ch
0x856332: jmp     loc_85614A
0x856337: cmp     byte ptr [esp+14h+arg_10], 1
0x85633C: jnz     loc_8564C8
0x856342: push    10h; Size
0x856344: call    FormHeapAlloc
0x856349: add     esp, 4
0x85634C: mov     [esp+14h+arg_10], eax
0x856350: test    eax, eax
0x856352: mov     [esp+14h+var_4], 0Dh
0x85635A: jz      loc_856148
0x856360: mov     ecx, [esp+14h+arg_8]
0x856364: mov     edx, [esp+14h+arg_4]
0x856368: push    ecx
0x856369: mov     ecx, [esp+18h+vtable]
0x85636D: push    edx
0x85636E: push    2; lightCount
0x856370: push    1; byte6
0x856372: push    5Bh ; '['; selector
0x856374: push    ecx; geometry
0x856375: push    eax; outPass
0x856376: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85637B: add     esp, 1Ch
0x85637E: jmp     loc_85614A
0x856383: cmp     [esp+14h+arg_28], 0
0x856388: jnz     short loc_8563D6
0x85638A: cmp     byte ptr [esp+14h+arg_10], 1
0x85638F: jnz     loc_8564C8
0x856395: push    10h; Size
0x856397: call    FormHeapAlloc
0x85639C: add     esp, 4
0x85639F: mov     [esp+14h+arg_10], eax
0x8563A3: test    eax, eax
0x8563A5: mov     [esp+14h+var_4], 0Eh
0x8563AD: jz      loc_856148
0x8563B3: mov     ecx, [esp+14h+arg_8]
0x8563B7: mov     edx, [esp+14h+arg_4]
0x8563BB: push    ecx
0x8563BC: mov     ecx, [esp+18h+vtable]
0x8563C0: push    edx
0x8563C1: push    2; lightCount
0x8563C3: push    1; byte6
0x8563C5: push    53h ; 'S'; selector
0x8563C7: push    ecx; geometry
0x8563C8: push    eax; outPass
0x8563C9: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8563CE: add     esp, 1Ch
0x8563D1: jmp     loc_85614A
0x8563D6: cmp     byte ptr [esp+14h+arg_10], 1
0x8563DB: jnz     loc_8564C8
0x8563E1: push    10h; Size
0x8563E3: call    FormHeapAlloc
0x8563E8: add     esp, 4
0x8563EB: mov     [esp+14h+arg_10], eax
0x8563EF: test    eax, eax
0x8563F1: mov     [esp+14h+var_4], 0Fh
0x8563F9: jz      loc_856148
0x8563FF: mov     ecx, [esp+14h+arg_8]
0x856403: mov     edx, [esp+14h+arg_4]
0x856407: push    ecx
0x856408: mov     ecx, [esp+18h+vtable]
0x85640C: push    edx
0x85640D: push    2; lightCount
0x85640F: push    1; byte6
0x856411: push    5Eh ; '^'; selector
0x856413: push    ecx; geometry
0x856414: push    eax; outPass
0x856415: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x85641A: add     esp, 1Ch
0x85641D: jmp     loc_85614A
0x856422: cmp     [esp+14h+arg_20], 0
0x856427: jnz     loc_8564D2
0x85642D: cmp     [esp+14h+arg_28], 0
0x856432: jnz     short loc_856480
0x856434: cmp     byte ptr [esp+14h+arg_10], 1
0x856439: jnz     loc_8564C8
0x85643F: push    10h; Size
0x856441: call    FormHeapAlloc
0x856446: add     esp, 4
0x856449: mov     [esp+14h+arg_10], eax
0x85644D: test    eax, eax
0x85644F: mov     [esp+14h+var_4], 10h
0x856457: jz      loc_856148
0x85645D: mov     ecx, [esp+14h+arg_8]
0x856461: mov     edx, [esp+14h+arg_4]
0x856465: push    ecx
0x856466: mov     ecx, [esp+18h+vtable]
0x85646A: push    edx
0x85646B: push    2; lightCount
0x85646D: push    1; byte6
0x85646F: push    51h ; 'Q'; selector
0x856471: push    ecx; geometry
0x856472: push    eax; outPass
0x856473: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x856478: add     esp, 1Ch
0x85647B: jmp     loc_85614A
0x856480: cmp     byte ptr [esp+14h+arg_10], 1
0x856485: jnz     short loc_8564C8
0x856487: push    10h; Size
0x856489: call    FormHeapAlloc
0x85648E: add     esp, 4
0x856491: mov     [esp+14h+arg_10], eax
0x856495: test    eax, eax
0x856497: mov     [esp+14h+var_4], 11h
0x85649F: jz      loc_856148
0x8564A5: mov     ecx, [esp+14h+arg_8]
0x8564A9: mov     edx, [esp+14h+arg_4]
0x8564AD: push    ecx
0x8564AE: mov     ecx, [esp+18h+vtable]
0x8564B2: push    edx
0x8564B3: push    2; lightCount
0x8564B5: push    1; byte6
0x8564B7: push    5Ch ; '\'; selector
0x8564B9: push    ecx; geometry
0x8564BA: push    eax; outPass
0x8564BB: call    RenderPass_Construct; Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
0x8564C0: add     esp, 1Ch
0x8564C3: jmp     loc_85614A
0x8564C8: mov     eax, [esp+14h+arg_C]
0x8564CC: add     word ptr [eax], 1
0x8564D0: jmp     short loc_8564E7
0x8564D2: mov     eax, ds:0B42E8Ch
0x8564D7: test    eax, eax
0x8564D9: jz      short loc_8564E7
0x8564DB: push    0; _DWORD
0x8564DD: push    offset aShaderError_22; "SHADER ERROR : no shader to handle BSSM"...
0x8564E2: call    eax ; unk_B42E8C
0x8564E4: add     esp, 8
0x8564E7: mov     eax, [esp+14h+arg_14]
0x8564EB: mov     byte ptr [eax], 0
0x8564EE: mov     ecx, [esp+14h+var_C]
0x8564F2: mov     large fs:0, ecx
0x8564F9: pop     ecx
0x8564FA: pop     esi
0x8564FB: add     esp, 0Ch
0x8564FE: retn    34h ; '4'
0x9D3B70: mov     eax, [ebp+14h]
0x9D3B73: push    eax
0x9D3B74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B79: pop     ecx
0x9D3B7A: retn
0x9D3B7B: mov     eax, [ebp+14h]
0x9D3B7E: push    eax
0x9D3B7F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B84: pop     ecx
0x9D3B85: retn
0x9D3B86: mov     eax, [ebp+14h]
0x9D3B89: push    eax
0x9D3B8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B8F: pop     ecx
0x9D3B90: retn
0x9D3B91: mov     eax, [ebp+14h]
0x9D3B94: push    eax
0x9D3B95: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3B9A: pop     ecx
0x9D3B9B: retn
0x9D3B9C: mov     eax, [ebp+14h]
0x9D3B9F: push    eax
0x9D3BA0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BA5: pop     ecx
0x9D3BA6: retn
0x9D3BA7: mov     eax, [ebp+14h]
0x9D3BAA: push    eax
0x9D3BAB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BB0: pop     ecx
0x9D3BB1: retn
0x9D3BB2: mov     eax, [ebp+14h]
0x9D3BB5: push    eax
0x9D3BB6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BBB: pop     ecx
0x9D3BBC: retn
0x9D3BBD: mov     eax, [ebp+14h]
0x9D3BC0: push    eax
0x9D3BC1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BC6: pop     ecx
0x9D3BC7: retn
0x9D3BC8: mov     eax, [ebp+14h]
0x9D3BCB: push    eax
0x9D3BCC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BD1: pop     ecx
0x9D3BD2: retn
0x9D3BD3: mov     eax, [ebp+14h]
0x9D3BD6: push    eax
0x9D3BD7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BDC: pop     ecx
0x9D3BDD: retn
0x9D3BDE: mov     eax, [ebp+14h]
0x9D3BE1: push    eax
0x9D3BE2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BE7: pop     ecx
0x9D3BE8: retn
0x9D3BE9: mov     eax, [ebp+14h]
0x9D3BEC: push    eax
0x9D3BED: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BF2: pop     ecx
0x9D3BF3: retn
0x9D3BF4: mov     eax, [ebp+14h]
0x9D3BF7: push    eax
0x9D3BF8: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3BFD: pop     ecx
0x9D3BFE: retn
0x9D3BFF: mov     eax, [ebp+14h]
0x9D3C02: push    eax
0x9D3C03: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3C08: pop     ecx
0x9D3C09: retn
0x9D3C0A: mov     eax, [ebp+14h]
0x9D3C0D: push    eax
0x9D3C0E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3C13: pop     ecx
0x9D3C14: retn
0x9D3C15: mov     eax, [ebp+14h]
0x9D3C18: push    eax
0x9D3C19: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3C1E: pop     ecx
0x9D3C1F: retn
0x9D3C20: mov     eax, [ebp+14h]
0x9D3C23: push    eax
0x9D3C24: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3C29: pop     ecx
0x9D3C2A: retn
0x9D3C2B: mov     eax, [ebp+14h]
0x9D3C2E: push    eax
0x9D3C2F: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D3C34: pop     ecx
0x9D3C35: retn
0x9D3C36: mov     edx, [esp+arg_4]
0x9D3C3A: lea     eax, [edx-4]
0x9D3C3D: mov     ecx, [edx-8]
0x9D3C40: xor     ecx, eax
0x9D3C42: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D3C47: mov     eax, offset stru_AFBE24
0x9D3C4C: jmp     ___CxxFrameHandler3
