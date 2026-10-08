0x7B48E0: mov     eax, [esp+arg_8]; MoonSugarEffect build 56: plugin image-space profiles now share the MoonSugarDistortion pixel shader asset and select MoonSugar/HeadWound/Blind branches via plugin constants; native image-space hook behavior remains the decoded Oblivion RenderProcessImageSpaceShader path.
0x7B48E4: mov     ecx, [esp+arg_4]
0x7B48E8: mov     edx, [esp+arg_0]
0x7B48EC: push    eax
0x7B48ED: push    ecx
0x7B48EE: mov     ecx, ds:0B42D7Ch
0x7B48F4: push    edx
0x7B48F5: call    ImageShaderList__ProcessImageSpaceShader; MoonSugarEffect decode: ImageSpaceShaderList processing builds a temporary active shader list, binds each shader to the shared screen element, and ping-pongs source/destination targets.
0x7B48FA: retn
