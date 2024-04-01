#pragma once
#include <string>

namespace Hazel {

	class Shader
	{
	public:
		Shader(const std::string& VertexSrc, const std::string& FragmentSrc);
		~Shader();

		void Bind();
		void Unbind();

	private:
		uint32_t m_RendererID;
	};
}