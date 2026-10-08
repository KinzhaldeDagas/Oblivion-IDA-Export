0x864400: push    ebx; Shared Lighting30/Hair SetupGeometry wrapper. Calls the native PP-lighting parser at 0x7DA220, then removes NiProperty ID 7. This proves both exact classes inherit Refract/RefractF name decoding.
0x864401: push    esi
0x864402: mov     esi, [esp+8+geometry]
0x864406: push    esi; geometry
0x864407: call    BSShaderPPLightingProperty_SetupGeometry; Shared PP-lighting geometry/material setup. Oblivion parses NiProperty ID 2 name tokens here: exact 'Refract' sets passInfo 0x8000; exact 'RefractF' sets 0x10000, invalidates the cached pass key, enables refraction state, and clears conflicting alpha flag 1. Shared wrapper ownership proves Lighting30 and Hair inherit this parser.
0x86440C: push    7
0x86440E: mov     ecx, esi
0x864410: mov     bl, al
0x864412: call    NiNode_GetNiPropertyByID;
0x864417: test    eax, eax
0x864419: jz      short loc_864423
0x86441B: push    eax
0x86441C: mov     ecx, esi
0x86441E: call    sub_4A1220
0x864423: pop     esi
0x864424: mov     al, bl
0x864426: pop     ebx
0x864427: retn    4
