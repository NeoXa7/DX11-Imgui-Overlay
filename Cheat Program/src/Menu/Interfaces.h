#pragma once
#include <ImGui/imgui.h>
#include <Menu/ImGuiCustomElements.h> 

namespace Flags
{
	
	inline bool checkboxFlag = false;
}

void RenderMenu()
{
	ImGui::SetNextWindowSizeConstraints(ImVec2(400, 450), ImVec2(1366, 768));
	C_Elements::CustomizeMenuTitleBar();
	ImGui::Begin("Overlay Menu");
	
	C_Elements::Checkbox("Checkbox1", &Flags::checkboxFlag);

	ImGui::End();
}

