#pragma once

namespace test {
	class Test {
	public:
		Test() {}
		~Test() {}
		virtual void OnUpdate(float delta_time) {}
		virtual void OnRender() {}
		virtual void OnImGuiRender() {}
	};
}